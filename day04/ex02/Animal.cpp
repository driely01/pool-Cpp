/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:10:36 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/17 14:32:16 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {

	std::cout << "Animal default constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal( const Animal &other ) {

	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

Animal::~Animal( void ) {

	std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=( const Animal &rhs ) {

	std::cout << "Animal copy assignment operator called" << std::endl;
	
	if ( this == &rhs )
			return *this;
	this->type = rhs.type;
	return *this;
}

std::string Animal::getType( void ) const {

	return this->type;
}

void Animal::makeSound( void ) const {

	std::cout << "animal sound" << std::endl;
}