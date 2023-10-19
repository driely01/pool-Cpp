/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:16:34 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/19 16:58:30 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) {

}

AMateria::AMateria( std::string const &type ) : type( type ) {

}

AMateria::AMateria( const AMateria &other ) {
	
	*this = other;
}

AMateria::~AMateria( void ) {

}

AMateria & AMateria::operator=( const AMateria &rhs ) {
	
	if ( this == &rhs )
		return *this;
	this->type = rhs.type;
	return *this;
}

std::string const & AMateria::getType( void ) const {

	return this->type;
}

void AMateria::use( ICharacter &target ) {

	std::cout << "AMateria use fuction " << target.getName() << std::endl;
}