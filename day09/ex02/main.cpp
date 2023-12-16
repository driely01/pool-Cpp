/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:31:20 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/16 15:34:35 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main( int argc, char **argv ) {

	if ( argc > 1 ) {

		std::vector<int> containerOne;
		
		for ( size_t i = 1; argv[i]; i++ ) {

			if ( parseArguments( argv[i] ) ) {

				// do some business here
				fillVector( containerOne, argv[i] );

			} else {

				break;

			}
		}
		executeAlgo( containerOne );
	} else {

		std::cout << "Error: bad arguments." << std::endl;
	}
	return 0;
}