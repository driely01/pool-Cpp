/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:53:34 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/19 16:13:32 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) {

	this->type = "ice";
}

Ice::Ice( const Ice &other ) {

	*this = other;
}

Ice::~Ice( void ) { }


Ice & Ice::operator=( const Ice &rhs ) {
	
	this->type = rhs.type;
	return *this;
}

AMateria * Ice::clone( void ) const {

	return new Ice();
}

void Ice::use( ICharacter &target ) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}