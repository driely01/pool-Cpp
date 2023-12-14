/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 20:44:23 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/14 21:22:14 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

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