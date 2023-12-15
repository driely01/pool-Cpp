/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 20:46:06 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/15 11:09:55 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main( int argc, char **argv ) {

	if ( argc == 2 ) {

		std::stack<long> polish;
		
		if ( parseArguments( argv[1] ) ) {

			// do some business here
			fillStackExecute( polish, argv[1] );
		}
	} else {

		std::cout << "Error: bad arguments!" << std::endl;
	}
	return 0;
}