/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:15:30 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/29 11:37:08 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

void HumanB::setWeapon( Weapon &weap ) {

	this->weapon = &weap;
}

HumanB::HumanB( std::string name ) {
	
	this->name = name;
	this->weapon = NULL;
}

void HumanB::attack( void ) {

	if ( this->weapon )
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}