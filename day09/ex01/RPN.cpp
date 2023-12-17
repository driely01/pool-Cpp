/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 20:44:23 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/16 15:58:52 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static int doOperation( int right, int left, char oprt ) {

	if ( oprt == '+' )
		return left + right;
	else if ( oprt == '-' )
		return left - right;
	else if ( oprt == '*' )
		return left * right;
	else
		return left / right;
}

bool fillStackExecute( std::stack<long> polish, std::string arg ) {

	int number = 0;
	int left = 0;
	int right = 0;
	int result = 0;

	for ( size_t i = 0; arg[i]; i++ ) {

		if ( isdigit( arg[i] ) ) {

			number = arg[i] - 48;
			polish.push( number );

		} else if ( arg[i] == '+' || arg[i] == '-' || arg[i] == '*' || arg[i] == '/' ) {

			if ( polish.size() < 2 ) {
				
				std::cout << "Error: invalid operation!" << std::endl;
				return false;
			} else {

				right = polish.top();
				polish.pop();
				left = polish.top();
				polish.pop();
				if ( arg[i] == '/' && right == 0 ) {

					std::cout << "Error: invalid operation, you dividing on 0!" << std::endl;
					return false;
				}
				result = doOperation( right, left, arg[i] );
				polish.push( result );
			}
		}
	}
	if ( polish.empty() || polish.size() > 1 ) {

		std::cout << "Error: invalid operation!" << std::endl;
		return false;
		
	} else {

		std::cout << polish.top() << std::endl;
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