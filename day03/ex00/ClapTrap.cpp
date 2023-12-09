/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:17:39 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/09 16:17:40 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {

	std::cout << "ClapTrap default constructor called" << std::endl;
	this->name = "anonyme";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap( std::string name ) : name( name ) {

	std::cout << "ClapTrap constructor name called" << std::endl;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap& other ) {

		std::cout << "ClapTrap copy constructor called" << std::endl;
		*this = other;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& rhs ) {

	std::cout << "ClapTrap copy assignement operator called" << std::endl;
	
	if ( this == &rhs )
		return *this;
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return *this;
}

ClapTrap::~ClapTrap( void ) {

	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack( const std::string& target ) {

	if ( this->hitPoints <= 0 )
		std::cout << "ClapTrap " << this->name << " has been destroyed cannot attack " << target << std::endl;
	else if ( this->energyPoints <= 0 )
		std::cout << "ClapTrap " << this->name << " has no energy to attack " << target << std::endl;
	else if ( this->energyPoints > 0 && this->hitPoints > 0 ) {

		this->energyPoints -= 1;
		std::cout <<
					"ClapTrap " 	<< this->name			<<
					" attacks " 	<< target				<<
					", causing " 	<< this->attackDamage	<<
					" points of damage!" 					<<
		std::endl;
	}
}

void ClapTrap::takeDamage( unsigned int amount ) {

	if ( this->hitPoints < (int)amount ) {

		std::cout << "ClapTrap " << this->name << " has been destroyed cannot take damage" << std::endl;
		this->hitPoints = 0;
		return;
	}
	else {
		
		this->hitPoints -= amount;
		std::cout << "ClapTrap " << this->name << " has been damaged with " << amount << " and his hit point become " << this->hitPoints << std::endl;
	}
}

void ClapTrap::beRepaired( unsigned int amount ) {

	if ( this->energyPoints > 0 && this->hitPoints > 0 ) {

		this->hitPoints += amount;
		std::cout << "ClapTrap " << this->name << " has been repaired with " << " and his hit points become " << this->hitPoints << std::endl;
	}
	else if ( this->hitPoints <= 0 )
		std::cout << "ClapTrap " << this->name << " has been distoryed cannot be repaired" << std::endl;
	else if ( this->energyPoints <= 0 )
		std::cout << "ClapTrap " << this->name << " has no energy points to be repaired" << std::endl;
}