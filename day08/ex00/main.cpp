/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:10:14 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/12 15:25:41 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main( void ) {

	try {

		std::vector<int> vec;
		std::vector<int>::iterator it;
		vec.reserve( 32 );
		for ( int i = 0; i < 32; i++ )
			vec.push_back( i );
		it = easyfind( vec, 10 );

		std::cout << "found: " << *it << std::endl;
		
	} catch ( std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	//----------------------------------------------//
	try {

		std::list<int> liste;
		std::list<int>::iterator it;

		for ( int i = 200; i >= 100; i-- ) 
			liste.push_front( i );

		it = easyfind( liste, 150 );
		std::cout << "found: " << *it << std::endl;
		
	} catch( std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	return 0;
}