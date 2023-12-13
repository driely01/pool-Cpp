/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:49:32 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/13 22:41:54 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) { }

// BitcoinExchange::BitcoinExchange( const BitcoinExchange &other ) { }

BitcoinExchange::~BitcoinExchange( void ) { }

// BitcoinExchange &BitcoinExchange::operator=( const BitcoinExchange &rhs ){ }

bool checkDateDigitsAndSlash( std::string &date ) {
	
	int slash = 0;
	
	for ( int i = 0; date[i]; i++ ) {

		if ( !isdigit( date[i] ) && date[i] != '-' ) {
			
			std::cout << "Error: bad input =>" << date << std::endl;
			return false;
		}
	}
	for ( int i = 0; date[i]; i++ ) {

		if ( date[i] == '-' )
			slash++;
	}
	if ( slash > 2 ) {

		std::cout << "Error: bad input => " << date << std::endl;
		return false;
	}
	return true;
}


bool checkYearMonthDay( std::string &date ) {

	std::string find;
	std::string month;
	std::string year;
	std::string day;
	std::string orDate;

	int yyyy;
	int mm;
	int dd;

	orDate = date;
	year = date.substr( 0, date.find( "-" ) );
	date = date.substr( date.find( "-" ) + 1, date.length() );
	month = date.substr( 0, date.find( "-" ) );
	date = date.substr( date.find( "-" ) + 1, date.length() );
	day = date.substr( 0, date.find( " " ) );
	
	std::istringstream( year ) >> yyyy;
	std::istringstream( month ) >> mm;
	std::istringstream( day ) >> dd;
	
	if ( yyyy <= 0 || mm > 12 || mm <= 0 || dd > 31 || dd <= 0 ) {
		
		std::cout << "Error: bad input => " << orDate << std::endl;
		return false;
	}

	// std::cout << "|" << yyyy << "-" << mm << "-" << dd << "|" << std::endl;
	
	return true;
}

bool parseValue( std::string value ) {

	double bitcoinValue;
	bool flag = true;

	for ( int i = 0; value[i]; i++ ) {

		if ( !isdigit( value[i] ) ) {

			if ( value[i] == '.' ) {
				
				if ( flag == true )
					flag = false;
				else {
					
					std::cout << "Error: invalid number => " << value << std::endl;
					return false;
				}
			}
			else if ( ( value[i] == '-' || value[i] == '+' ) && i == 0 )
				continue;
			std::cout << "Error: invalid number => " << value << std::endl;
			return false;
		}
	}

	std::istringstream( value ) >> bitcoinValue;

	if ( bitcoinValue < 0 ) {
		
		std::cout << "Error:  not a positive number." << std::endl;
		return false;
	}
	else if ( bitcoinValue > 1000 ) {

		std::cout << "Error: too large number." << std::endl;
		return false;
	}
	return true;
}

bool parseDate( std::string date ) {

	if ( checkDateDigitsAndSlash( date ) && checkYearMonthDay( date ))
		return true;
	return false;
}

bool getFormAndDelimator( std::string buffer, std::string &date, std::string &value, std::string &delimator ) {

	(void)value;
	(void)delimator;
	int i = 4;
	date = buffer.substr( 0, i );
	if ( date != "date" ) {
		
		std::cout << "Error: inalid format." << std::endl;
		return false;
	}
	for ( buffer[i]; i++; ) {

		if ( isalpha( buffer[i] ) )
			break;
	}
	delimator = buffer.substr( 4, i - 4);
	value = buffer.substr( i, buffer.length() );
	if ( value != "value" ) {
		
		std::cout << "Error: inalid format." << std::endl;
		return false;
	}
	std::cout << date << delimator << value << " " << std::endl;
	return true;
}

bool parseInput( char *filename ) {

	std::string buffer;
	std::ifstream inputFile;
	std::string dateForm;
	std::string valueForm;
	std::string delimator;
	
	size_t find;

	inputFile.open( filename, std::ifstream::in );
	if ( !inputFile ) {

		std::cout << "Error: could not open file." << std::endl;
		return false;
	}
	
	getline( inputFile, buffer );
	if ( !getFormAndDelimator( buffer, dateForm, valueForm, delimator ) )
		return false;
	
	while ( !inputFile.eof() ) {

		if ( getline( inputFile, buffer ) && !buffer.empty()) {

			// find the delimator
			std::string date = buffer;
			std::string value;
			find = buffer.find( delimator );
			if ( find != std::string::npos ) {
				
				date.resize( find );
				value = buffer.substr(find + delimator.length());
				if ( parseDate( date ) ) {
					
					if ( parseValue( value ) )
						std::cout << date << " => " << value  << std::endl;
				}
			} else {

				std::cout << "Error: bad input => " << buffer << std::endl;
			}
		}
	}
	inputFile.close();
	return true;
}