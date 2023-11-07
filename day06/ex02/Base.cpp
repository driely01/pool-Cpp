/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:40:06 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/07 14:12:58 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base( void ) { }

Base *generate( void ) {

	int nb;
	srand( time( NULL ) );
	nb = rand() % 100 + 1;
	if ( nb < 33 )
		return new A();
	else if ( nb >= 33 && nb < 66 )
		return new B();
	else
		return new C();
}

void identify( Base *p ) {

	if ( dynamic_cast<A *>( p ) != NULL )
		std::cout << "this pointer is an A class" << std::endl;
	else if ( dynamic_cast<B *>( p ) != NULL )
		std::cout << "this pointer is a B class" << std::endl;
	else if ( dynamic_cast<C *>( p ) != NULL )
		std::cout << "this pointer is a C class" << std::endl;
}

void identify( Base &p ) {

	try {

		( void )dynamic_cast<A &>( p );
		std::cout << "this reference is an A class" << std::endl;
	} catch ( std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	try {

		( void )dynamic_cast<B &>( p );
		std::cout << "this reference is a B class" << std::endl;
	} catch( std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	try {

		( void )dynamic_cast<C &>( p );
		std::cout << "this reference is a C class" << std::endl;
	} catch( std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
}