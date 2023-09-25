/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:40:32 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/25 13:59:07 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main( int argc, char **argv ) {

	
	Harl harl;

	if ( argc == 2 ) {

		harl.complain( argv[1] );
	} else {

		std::cout << "bad arguments!" << std::endl;
	}
	return 0;
}