/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:10:32 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/18 14:01:59 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void ) {

	int size = 4;
	const Animal *animal[size];
	
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
	
	return 0;
}