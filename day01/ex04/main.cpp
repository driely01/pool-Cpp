/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:03:47 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/24 15:54:15 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "sed.hpp"

int main( int argc, char **argv ) {
	
	( void )argc;
	if ( argc == 4 ) {

		replacingFile( argv[1], argv[2], argv[3] );
	} else {

		std::cout << "please enter all three arguments." << std::endl;
	}
	return 0;
}