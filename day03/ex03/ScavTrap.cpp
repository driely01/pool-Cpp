/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:55:11 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/13 21:10:58 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {

	std::cout << "ScavTrap constructor called" << std::endl;
	this->name = "anonyme scav";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap( std::string name ) {

	std::cout << "ScavTrap name constructor called" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap( void ) {

	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack( std::string target ) {

	if ( this->hitPoints <= 0 )
		std::cout << "ScavTrap " << this->name << " has been destroyed cannot attack " << target << std::endl;
	else if ( this->energyPoints <= 0 )
		std::cout << "ScavTrap " << this->name << " has no energy to attack " << target << std::endl;
	else if ( this->energyPoints > 0 || this->hitPoints > 0 ) {

		this->energyPoints -= 1;
		std::cout << 
					"ScavTrap " 	<< this->name			<<
					" attacks " 	<< target				<<
					", causing " 	<< this->attackDamage	<<
					" points of damage!" 					<<
		std::endl;
	}
}

void ScavTrap::guardGate( void ) {

	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}