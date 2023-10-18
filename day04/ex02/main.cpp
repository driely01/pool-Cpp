/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:10:32 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/18 13:23:17 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void f( void ) {

	system( "leaks animal" );
}

int main( void ) {

	// atexit( f );
	int size = 10;
	const Animal *animal[size];
	std::cout << std::endl;
	
	for ( int i = 0; i < size; i++ ) {

		if ( i < size / 2 )
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}
	std::cout << std::endl;
	
	for ( int i = 0; i < size; i++ ) {

		animal[i]->getType();
		animal[i]->makeSound();
	}
	std::cout << std::endl;

	for ( int i = 0; i < size; i++ )
		delete animal[i];

	std::cout << std::endl;
	
	Cat b;
	Cat a = b;
	std::cout << std::endl;
	b.getType();
	a.getType();
	b.makeSound();
	a.makeSound();
	std::cout << std::endl;
	
	return 0;
}