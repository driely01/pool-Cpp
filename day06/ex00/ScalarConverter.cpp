/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:53:52 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/06 14:49:46 by del-yaag         ###   ########.fr       */
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
		if ( i > 3 || static_cast<int>(str[find]) == 0 )
			return false;
		else 
			return true;
	}
}

static void print( int &nint, float &nfloat, double &ndouble, char &nchar, std::string str ) {

	if ( nint >= 0 && nint <= 31 )
		std::cout << "char: " << "Non displayable" << std::endl;
	else 
		std::cout << "char: '" << nchar << "'" << std::endl;
	std::cout << "int: " << nint << std::endl;

	if ( checkDot( str ) == false ) {

		std::cout << "float: " << nfloat << ".0f" << std::endl;
		std::cout << "double: " << ndouble << ".0" << std::endl;
	} else {

		std::cout << "float: " << nfloat << "f" << std::endl;
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

static void staticCast( int &nint, float &nfloat, double &ndouble, char &nchar, std::string &str, bool b ) {

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

void ScalarConverter::convert( std::string str ) {

	char nchar;
	int nint;
	float nfloat;
	double ndouble;

	if ( str.length() == 1 ) {

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

			for ( int i = 0; str[i]; i++ ) {

				if ( ((str[i] == '+' || str[i] == '-') && i) || (!std::isdigit( str[i] ) && str[i] != '.' ) ) {

					std::cout << "error: invalid number!" << std::endl;
					return;
				}
			}
			staticCast( nint, nfloat, ndouble, nchar, str, 1 );
		}
	}
}