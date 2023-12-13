/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:49:32 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/13 18:31:42 by del-yaag         ###   ########.fr       */
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

		if ( !isdigit( date[i] ) && date[i] != '-' && date[i] != ' ' ) {
			
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

	double yyyy;
	double mm;
	double dd;

	orDate = date;
	year = date.substr( 0, date.find( "-" ) );
	date = date.substr( date.find( "-" ) + 1, date.length() );
	month = date.substr( 0, date.find( "-" ) );
	date = date.substr( date.find( "-" ) + 1, date.length() );
	day = date.substr( 0, date.find( " " ) );
	
	std::istringstream( year ) >> yyyy;
	std::istringstream( month ) >> mm;
	std::istringstream( day ) >> dd;
	
	if ( yyyy <= 0 || mm > 31 || mm <= 0 || dd > 12 || dd <= 0 ) {
		
		std::cout << "Error: bad input => " << orDate << std::endl;
		return false;
	}

	std::cout << "|" << yyyy << "-" << mm << "-" << dd << "|" << std::endl;
	
	return true;
}

bool parseDate( std::string date ) {

	if ( checkDateDigitsAndSlash( date ) && checkYearMonthDay( date ))
		return true;
	return false;
}


bool parseInput( char *filename ) {

	std::string buffer;
	std::ifstream inputFile;
	size_t find;

	inputFile.open( filename, std::ifstream::in );
	if ( !inputFile ) {

		std::cout << "Error: could not open file." << std::endl;
		return false;
	}
	
	getline( inputFile, buffer );
	if ( buffer != "date | value" ) {

		std::cout << "Error: date | value => not found!" << std::endl;
		return false;
	}
	
	while ( !inputFile.eof() ) {

		if ( getline( inputFile, buffer ) ) {

			// find the delimator
			std::string date = buffer;
			std::string value;
			find = buffer.find( "|" );
			if ( find != std::string::npos ) {
				
				date.resize( find );
				value = buffer.substr(find + 1);
				if ( parseDate( date ) ) {
					
					std::cout << date << " => |" << value << "| = " << "chihaja" << std::endl;
				}
			} else {

				std::cout << "Error: bad input => " << buffer << std::endl;
			}
		}
		// else {

		// 	std::cout << buffer << std::endl;
		// }
	}
	inputFile.close();
	return true;
}