/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 21:20:42 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/15 18:14:22 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {

	std::cout << "FragTrap constructor called" << std::endl;
	this->name = "anonyme ft";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap( std::string name) {

	std::cout << "FragTrap name constructor called" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap &other ) {

	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = other;
}

void FragTrap::operator=( const FragTrap &rhs ) {

	std::cout << "FragTrap copy assignement operator called" << std::endl;
	
	if ( this == &rhs )
		return;
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
}

FragTrap::~FragTrap( void ) {
	
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys( void ) {

	std::cout << "FragTrap hight fives request" << std::endl;
}