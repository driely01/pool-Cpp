/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 20:44:23 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/14 21:36:05 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

Tree::Tree( void ) {
	
	this->left_child = NULL;
	this->right_child = NULL;
	this->oprt = NULL;
}

Tree::~Tree( void ) { }

Tree::Tree( const Tree &other ){

	*this = other;
}
Tree &Tree::operator=( const Tree &rhs ) {
	
	if ( this == &rhs )
		return *this;
	this->left_child = rhs.left_child;
	this->right_child = rhs.right_child;
	this->oprt = rhs.oprt;
	return *this;
}

bool fillStackExecute( std::stack<long> polish, std::string arg ) {

	int number;

	for ( size_t i = 0; arg[i]; i++ ) {

		if ( isdigit( arg[i] ) ) {

			std::istringstream( arg[i] ) >> number;
			polish.push( number );

		} else if ( arg[i] == '+' || arg[i] == '-' || arg[i] == '*' || arg[i] == '/' ) {

		}
	}
	return true;
}

bool parseArguments( std::string arg ) {

	for ( size_t i = 0; arg[i]; i++ ) {

		if ( !isdigit( arg[i] ) && arg[i] != ' ' && arg[i] != '+' && arg[i] != '-' && arg[i] != '*' && arg[i] != '/' ) {

			std::cout << "Error: 1 invalid format!" << std::endl;
			return false;

		}
		else if ( ( isdigit( arg[i] ) || arg[i] == '+' || arg[i] == '-' || arg[i] == '*' || arg[i] == '/' ) && arg[i + 1] != ' ' && arg[i + 1] != 0 ) {

			std::cout << "Error: 2 invalid format!" << std::endl;
			return false;

		} else if ( arg[i] == ' ' && ( !isdigit( arg[i + 1] ) && arg[i + 1] != '+' && arg[i + 1] != '-' && arg[i + 1] != '*' && arg[i + 1] != '/' && arg[i + 1] != 0 )) {

			std::cout << "Error: 3 invalid format!" << std::endl;
			return false;

		}
	}
	return true;
}