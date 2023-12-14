/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:07:30 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/14 12:34:36 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main( int argc, char **argv ) {

	if ( argc == 2 ) {

		std::map<std::string, double> data;
		if ( readDataFillMap( data, "data.csv" ) ) {
			
			std::map<std::string, double>::iterator it = data.begin();
			while ( it != data.end() ) {

				std::cout << "map: " << it->first << " " << it->second << std::endl;
				++it;
			}
			std::cout << std::endl;
			(void)argv;
			// parseInputAndExecute( argv[1] );
		}
	
	} else {

		std::cout << "Error: could not open file." << std::endl;
	}
	return 0;
}