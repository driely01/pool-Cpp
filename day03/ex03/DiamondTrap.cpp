/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:03:36 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/15 18:39:01 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) {

	std::cout << "DiamondTrap constructor called" << std::endl;
	this->name = "anonyme diamond";
	
	ClapTrap::name = "anonyme d";
	ClapTrap::name.append( "_clap_name" );
	
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
}

DiamondTrap::DiamondTrap( std::string name ) {

	std::cout << "DiamondTrap name constructor called" << std::endl;
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
}

DiamondTrap::~DiamondTrap( void ) {

	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &other ) {

	*this = other;
}

void DiamondTrap::operator=( const DiamondTrap &rhs ) {

	std::cout << "DiamondTrap copy assignement operator called" << std::endl;
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
}

void DiamondTrap::whoAmI( void ) {

	std::cout << "I'm  " << this->name << " " << ClapTrap::name << std::endl;
}