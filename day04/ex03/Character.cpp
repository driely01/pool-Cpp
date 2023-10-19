/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:57:30 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/19 17:16:53 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) {

	this->name = "anonymose";
	for ( int i = 0; i < 4; i++ ) {

		this->inventory[i] = NULL;
	}
	for ( int i = 0; i < 1024; i++ ) {

		this->garbage[i] = NULL;
	}
}

Character::Character( std::string name ) {

	this->name = name;
	for ( int i = 0; i < 4; i++ ) {

		this->inventory[i] = NULL;
	}
	for ( int i = 0; i < 1024; i++ ) {

		this->garbage[i] = NULL;
	}
}

Character::Character( const Character &other ) {

	this->name = other.name;
	for ( int i = 0; i < 4; i++ ) {

		this->inventory[i] = other.inventory[i]->clone();
	}
}

Character & Character::operator=( const Character &rhs ) {

	if ( this == &rhs )
		return *this;
	this->name = rhs.name;
	for ( int i = 0; i < 4; i++ ) {

		delete this->inventory[i];
		this->inventory[i] = rhs.inventory[i]->clone();
	}
	return *this;
}

Character::~Character( void ) {
	
	for ( int i = 0; i < 4; i++ ) {

		delete this->inventory[i];
	}
	for ( int i = 0; this->garbage[i] != NULL; i++ ) {

		delete this->garbage[i];
	}
}

std::string const & Character::getName( void ) const {

	return this->name;
}

void Character::equip( AMateria *m ) {

	for ( int i = 0; i < 4; i++ ) {

		if ( this->inventory[i] == NULL ) {

			this->inventory[i] = m;
			return;
		}
	}
}

void Character::unequip( int idx ) {

	static int i;
	if ( idx < 0 || idx > 3 ) {

		std::cout << "invalid index." << std::endl;
	}
	else {
		
		this->garbage[i++] = this->inventory[idx];
		this->inventory[idx] = NULL;
	}
}

void Character::use( int idx, ICharacter &target ) {

	if ( idx < 0 || idx > 3 )
		return;
	else if ( !this->inventory[idx] )
		return;
	this->inventory[idx]->use( target );
}