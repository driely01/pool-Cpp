/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:49:52 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/06 16:38:29 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <stdio.h>

void f( void ) {

	system( "leaks serialize" );
}

int main( void ) {

	Data data;

	data.x = 100;
	data.y = 12;
	data.z = 87;
	data.c = 'c';
	data.b = false;

	uintptr_t p = Serializer::serialize( &data );
	std::cout << p << std::endl;
	uintptr_t hallo = (uintptr_t)&data;
	Data *d = Serializer::deserialize( hallo );
	std::cout << d->x << std::endl;
	std::cout << d->y << std::endl;
	std::cout << d->z << std::endl;
	std::cout << d->c << std::endl;
	std::cout << d->b << std::endl;

	
	return 0;
}