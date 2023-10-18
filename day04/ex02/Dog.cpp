/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:23:50 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/18 13:08:05 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog( const Dog &other ) {

	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain();
	*this = other;
}

Dog::~Dog( void ) {

	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

void Dog::operator=( const Dog &rhs ) {

	std::cout << "Dog copy assignment operator called" << std::endl;

	if ( this == &rhs )
		return;
	this->type = rhs.type;
	( *this->brain ) = ( *rhs.brain );
}

void Dog::makeSound( void ) const {

	std::cout << "Bow!!" << std::endl;
}