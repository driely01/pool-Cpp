/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:24:00 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/09 17:18:10 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {

	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat( const Cat &other ) {
	
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain();
	*this = other;
}

Cat::~Cat( void ) {

	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

void Cat::operator=( const Cat &rhs ) {

	std::cout << "Cat copy assignment operator called" << std::endl;

	if ( this == &rhs )
		return;
	this->type = rhs.type;
	
	( *this->brain ) = ( *rhs.brain );
}

void Cat::makeSound( void ) const {

	std::cout << "Miaaooo!!" << std::endl;
}