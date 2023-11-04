/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:53:52 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/04 16:31:46 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ) { }

ScalarConverter::ScalarConverter( const ScalarConverter &other ) { }

ScalarConverter::~ScalarConverter( void ) { }

ScalarConverter &ScalarConverter::operator=( const ScalarConverter &rhs ){ }

void convert( std::string converter ) {

	int intNumber;
	double doubleNumber;
	float floatNumber;
	char character;

	
	if ( converter.length() == 1 ) {

		if ( std::isdigit( converter[0] ) ) {

			intNumber = static_cast<int>( converter[0] );
		}
	}
}