/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:07:30 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/14 15:54:24 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main( int argc, char **argv ) {

	if ( argc == 2 ) {

		std::map<std::string, double> data;
		
		if ( readDataFillMap( data, "data.csv" ) ) {
			
			parseInputAndExecute( argv[1], data );
		}
	
	} else {

		std::cout << "Error: could not open file." << std::endl;
	}
	return 0;
}