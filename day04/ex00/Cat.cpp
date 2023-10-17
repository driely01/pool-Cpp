/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:24:00 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/17 14:26:40 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {

	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat( const Cat &other ) {
	
	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}

Cat::~Cat( void ) {

	std::cout << "Cat destructor called" << std::endl;
}

void Cat::operator=( const Cat &rhs ) {

	std::cout << "Cat copy assignment operator called" << std::endl;

	if ( this == &rhs )
		return;
	this->type = rhs.type;
}

void Cat::makeSound( void ) const {

	std::cout << "Miaaooo!!" << std::endl;
}