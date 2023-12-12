/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:07:02 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/12 15:54:39 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <vector>
#include <list>

int main( void ) {
	
	try {
		
		Span sp = Span( 5 );
		
		sp.addNumber( 6 );
		sp.addNumber( 3 );
		sp.addNumber( 17 );
		sp.addNumber( 9 );
		sp.addNumber( 11 );
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		
	} catch( std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	//-----------------------------------------------------------------//
	
	try {
		
		Span sp = Span( 100 );
		std::vector<int> vec;

		
		for ( int i = 0; i < 100; i++ )
			vec.push_back( i );
		
		sp.addRange( vec.begin(), vec.end() );
		std::cout << "shorest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	} catch( std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	//-----------------------------------------------------------------//
	
	try {

		int random;
		std::list<int> l;
		Span sp = Span( 1000 );

		srand( time(NULL) );
		for ( int i = 0; i < 1000; i++ ) {

			random = rand() % 1000 + 1;
			l.push_back( random );
		}
		
		sp.addRange( l.begin(), l.end() );
		std::cout << "shorest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	} catch( std::exception &ex ) {
		
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;
	//-----------------------------------------------------------------//

	return 0;
}