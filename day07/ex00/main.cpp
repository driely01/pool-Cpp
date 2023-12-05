/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:49:37 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/07 15:57:04 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

int main( void ) {

	int a = 2;
	int b = 3;
	
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap( c, d );
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	//my tests
	std::cout << std::endl << "bool test" << std::endl;
	bool fal = false;
	bool tru = true;

	::swap( fal, tru );
	std::cout << "fal: "  << fal << ", tru: " << tru << std::endl;
	std::cout << "min(fal, tru	) = " << ::min( fal, tru ) << std::endl;
	std::cout << "max( fal, tru ) = " << ::max( fal, tru ) << std::endl;

	//my tests
	std::cout << std::endl << "double test" << std::endl;
	double da = 1.99;
	double db = 99.1;

	::swap( da, db );
	std::cout << "fal: "  << da << ", tru: " << db << std::endl;
	std::cout << "min(fal, tru	) = " << ::min( da, db ) << std::endl;
	std::cout << "max( fal, tru ) = " << ::max( da, db ) << std::endl;
	
	return 0;
}