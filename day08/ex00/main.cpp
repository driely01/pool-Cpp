/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:10:14 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/17 11:28:07 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main( void ) {

	std::vector<int> vec;
	std::vector<int>::iterator it;
	
	try {

		vec.reserve( 32 );
		for ( int i = 0; i < 32; i++ )
			vec.push_back( i );
		it = easyfind( vec, 10 );

		while ( it != vec.end() ) {

			std::cout << *it << std::endl;
			it++;
		}
	} catch ( std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	return 0;
}