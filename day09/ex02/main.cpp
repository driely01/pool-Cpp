/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:31:20 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/19 10:39:08 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main( int argc, char **argv ) {

	if ( argc > 1 ) {

		std::vector<int> containerOne;
		std::deque<int> containerTwo;
		
		for ( size_t i = 1; argv[i]; i++ ) {

			if ( parseArguments( argv[i] ) ) {

				if ( !fillVector( containerOne, argv[i] ) || ! fillDeque( containerTwo, argv[i] ) ) {

					std::cout << "Error: overflow." << std::endl;
					return 0;

				}

			} else {

				containerOne.clear();
				containerTwo.clear();
				return 0;

			}
		}
		printVector( containerOne, 1 );
		executeAlgo( containerOne );
		executeAlgoDeque( containerTwo );

	} else {

		std::cout << "Error: bad arguments." << std::endl;

	}
	return 0;
}