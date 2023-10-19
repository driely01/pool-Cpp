/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:51:47 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/19 16:13:46 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) {

	this->type = "cure";
}

Cure::Cure( const Cure &other ) {

	*this = other;
}

Cure::~Cure( void ) { }

Cure & Cure::operator=( const Cure &rhs ) {

	if ( this == &rhs )
		return *this;
	this->type = rhs.type;
	return *this;
}

AMateria * Cure::clone( void ) const {

	return new Cure();
}

void Cure::use( ICharacter &target ) {

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}