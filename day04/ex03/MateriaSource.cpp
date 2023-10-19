/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:06:27 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/19 17:08:12 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) { 

	for ( int i = 0; i < 4; i++ ) {

		this->inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource( const MateriaSource &other ) {

	for ( int i = 0; i < 4; i++ ) {

		this->inventory[i] = other.inventory[i]->clone();
	}
}

MateriaSource::~MateriaSource( void ) {

	for ( int i = 0; i < 4; i++ ) {

		delete this->inventory[i];
	}
}

MateriaSource &MateriaSource::operator=( const MateriaSource &rhs ) {

	if ( this == &rhs )
		return *this;
	
	for ( int i = 0; i < 4; i++ ) {

		delete this->inventory[i];
		this->inventory[i] = rhs.inventory[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria( AMateria * materia ) {

	for ( int i = 0; i < 4; i++ ) {

		if ( this->inventory[i] == NULL ) {

			this->inventory[i] = materia;
			return;
		}
	}
}

AMateria *MateriaSource::createMateria( std::string const &type ) {

	for ( int i = 0; i < 4; i++ ) {

		if ( this->inventory[i]->getType() == type ) {

			return this->inventory[i]->clone();
		}
	}
	return 0;
}