/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:07:30 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/13 17:29:00 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main( int argc, char **argv ) {

	if ( argc == 2 ) {

		parseInput( argv[1] );
	
	} else {

		std::cout << "Error: could not open file." << std::endl;
	}
	return 0;
}