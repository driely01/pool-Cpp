/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:23:19 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/16 12:58:26 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int main( void ) {

	if ( bsp( Point( 0, 0 ), Point( 10, 0 ), Point( 0, 10 ), Point( 1, 1 ) ) )
		std::cout << "yes the point is inside the triangle" << std::endl << std::endl;
	else
		std::cout << "nah the point isn't inside the triangle" << std::endl << std::endl;
		
	if ( bsp( Point( 0, 0 ), Point( 10, 0 ), Point( 0, 10 ), Point( -1, 1 ) ) )
		std::cout << "yes the point is inside the triangle" << std::endl << std::endl;
	else
		std::cout << "nah the point isn't inside the triangle" << std::endl << std::endl;
		
	if ( bsp( Point( 0, 0 ), Point( 10, 0 ), Point( 0, 10 ), Point( 1, 9 ) ) )
		std::cout << "yes the point is inside the triangle" << std::endl << std::endl;
	else
		std::cout << "nah the point isn't inside the triangle" << std::endl << std::endl;
		
	if ( bsp( Point( 0, 0 ), Point( 10, 0 ), Point( 0, 10 ), Point( 5, 5 ) ) )
		std::cout << "yes the point is inside the triangle" << std::endl << std::endl;
	else
		std::cout << "nah the point isn't inside the triangle" << std::endl << std::endl;
	return 0;
}