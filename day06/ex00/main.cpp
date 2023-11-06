/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:53:49 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/06 13:56:33 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main( int argc, char **argv ) {

	if ( argc == 2 ) {

		ScalarConverter::convert( argv[1] );
	} else {

		std::cout << "invalid paramaters please enter a single paramater" << std::endl;
		return 1;
	}
	return 0;
}