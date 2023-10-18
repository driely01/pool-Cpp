/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:59:58 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/17 14:27:21 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {

	std::cout << "WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &other ) {
	
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = other;
}

WrongCat::~WrongCat( void ) {

	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::operator=( const WrongCat &rhs ) {

	std::cout << "WrongCat copy assignment operator called" << std::endl;
	
	if ( this == &rhs )
		return;
	this->type = rhs.type;
}

void WrongCat::makeSound( void ) const {

	std::cout << "Miaaooo!!" << std::endl;
}