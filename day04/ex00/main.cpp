/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:10:32 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/17 14:33:34 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void ) {

	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	const Cat cat;
	const Animal &aCat = cat;
	std::cout << std::endl;

	std::cout << aCat.getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	aCat.makeSound();
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	
	const WrongCat wc;
	const WrongAnimal &wa = wc;
	const WrongAnimal *a = new WrongAnimal();
	std::cout << std::endl;
	
	std::cout << wa.getType() << " " << std::endl;
	std::cout << a->getType() << " " << std::endl;
	wa.makeSound();
	a->makeSound();
	std::cout << std::endl;
	
	delete j;
	delete i;
	delete meta;
	return 0;
}