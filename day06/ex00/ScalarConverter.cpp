/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:53:52 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/02 10:21:59 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ) { }

ScalarConverter::ScalarConverter( const ScalarConverter &other ) {
		
	*this = other;
}

ScalarConverter::~ScalarConverter( void ) { }

ScalarConverter &ScalarConverter::operator=( const ScalarConverter &rhs ){

	if ( this == &rhs )
		return *this;
	*this = rhs;
	return *this;
}

bool checkDot( std::string str ) {

	size_t find = str.find(".");
	if ( find == std::string::npos )
		return false;
	else {
		
		int i = 0;
		while ( str[++find] == '0' )
			i++;
		if ( i > 4 || static_cast<int>(str[find]) == 0 )
			return false;
		else 
			return true;
	}
}

static void print( int &nint, float &nfloat, long double &ndouble, char &nchar, std::string str ) {

	// non printibale characters
	if (nint < 0 || nint >= 127 || ndouble > std::numeric_limits<int>::max() || ndouble < std::numeric_limits<int>::lowest() )
		std::cout << "char: " << "Impossible" << std::endl;
	else if (  nint >= 0 && nint <= 31 )
		std::cout << "char: " << "Non displayable" << std::endl;
	else 
		std::cout << "char: '" << nchar << "'" << std::endl;
	
	// int overflow
	if ( ndouble > std::numeric_limits<int>::max() || ndouble < std::numeric_limits<int>::min() )
		std::cout << "int: is overflowed! this type of conversion is impossible" << std::endl;
	else
		std::cout << "int: " << nint << std::endl;

	if ( checkDot( str ) == false && ndouble <= 999999 && ndouble >= -999999 ) {
		
		// float overflow
		if ( ndouble > std::numeric_limits<float>::max() || ndouble < -std::numeric_limits<float>::max() )
			std::cout << "float: is overflowed! this type of conversion is impossible" << std::endl;
		else
			std::cout << "float: " << nfloat << ".0f" << std::endl;
		
		// double overflow
		if ( ndouble > std::numeric_limits<double>::max() || ndouble < -std::numeric_limits<double>::max() )
			std::cout << "double: is overflowed! this type of conversion is impossible" << std::endl;
		else
			std::cout << "double: " << ndouble << ".0" << std::endl;
	} else {

		// float overflow
		if ( ndouble > std::numeric_limits<float>::max() || ndouble < -std::numeric_limits<float>::max() )
			std::cout << "float: is overflowed! this type of conversion is impossible" << std::endl;
		else
			std::cout << "float: " << nfloat << "f" << std::endl;
		
		// double overflow
		if ( ndouble > std::numeric_limits<double>::max() || ndouble < -std::numeric_limits<double>::max() )
			std::cout << "double: is overflowed! this type of conversion is impossible" << std::endl;
		else
			std::cout << "double: " << ndouble << std::endl;
	}
}

static void printNaN( void ) {

	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossibe" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}


static void printInf( void ) {

	std::cout << "char: impossible" << std::endl;
	std::cout << "int: inf" << std::endl;
	std::cout << "float: inf" << std::endl;
	std::cout << "double: inf" << std::endl;
}

static void printImpossible( void ) {

	std::cout << "char: Impossible" << std::endl;
	std::cout << "int: Impossible" << std::endl;
	std::cout << "float: Impossible" << std::endl;
	std::cout << "double: Impossible" << std::endl;
}

static void staticCast( int &nint, float &nfloat, long double &ndouble, char &nchar, const std::string &str, bool b ) {

	if ( b ) {
		
		std::istringstream( str ) >> ndouble;
		nint = static_cast<int>( ndouble );
		nfloat = static_cast<float>( ndouble );
		nchar = static_cast<char>( nint );
	} else {

		nint = static_cast<int>( str[0] );
		ndouble = static_cast<double>( nint );
		nfloat = static_cast<float>( nint );
		nchar = static_cast<char>( str[0] );
	}
	print( nint, nfloat, ndouble, nchar, str );
}

static bool parceParam( std::string str ) {

	bool flag = false;

	for ( int i = 0; str[i]; i++ ) {
				
		if ( !std::isdigit( str[i] ) ) {
			
			if ( str[i] == '.' && i ) {

				if ( flag == false )
					flag = true;
				else {

					// std::cout << "error : invalid number, please enter a valid one!" << std::endl;
					printImpossible();
					return false;
				}
			}
			else if ( ( str[i] == '+' || str[i] == '-' ) && !i )
				continue;
			else {
			
				// std::cout << "error : invalid number! please enter a valid one" << std::endl;
				printImpossible();
				return false;
			}
		} 
	}
	return true;
}

void ScalarConverter::convert( const std::string &str ) {

	char nchar;
	int nint;
	float nfloat;
	long double ndouble;

	if ( !str.length() )
		staticCast( nint, nfloat, ndouble, nchar, str, 0 );
	else if ( str.length() == 1 ) {

		if ( !std::isdigit( str[0] ) )
			staticCast( nint, nfloat, ndouble, nchar, str, 0 );
		else
			staticCast( nint, nfloat, ndouble, nchar, str, 1 );
	} else {
		
		if ( str == "nan" || str == "nanf" )
			printNaN();
		else if ( str == "-inf" || str == "+inf" || str == "-inff" || str == "+inff" )
			printInf();
		else {

			if ( !parceParam( str ) )
				return ;
			staticCast( nint, nfloat, ndouble, nchar, str, 1 );
		}
	}
}