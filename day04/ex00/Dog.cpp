/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:23:50 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/17 14:26:57 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog( const Dog &other ) {

	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
}

Dog::~Dog( void ) {

	std::cout << "Dog destructor called" << std::endl;
}

void Dog::operator=( const Dog &rhs ) {

	std::cout << "Dog copy assignment operator called" << std::endl;

	if ( this == &rhs )
		return;
	this->type = rhs.type;
}

void Dog::makeSound( void ) const {

	std::cout << "Bow!!" << std::endl;
}