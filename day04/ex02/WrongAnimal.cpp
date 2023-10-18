/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:59:49 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/17 14:27:50 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {

	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( const WrongAnimal &other ) {

	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal( void ) {

	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=( const WrongAnimal &rhs ) {

	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	
	if ( this == &rhs )
			return *this;
	this->type = rhs.type;
	return *this;
}

std::string WrongAnimal::getType( void ) const {

	return this->type;
}

void WrongAnimal::makeSound( void ) const {

	std::cout << "WrongAnimal sound" << std::endl;
}