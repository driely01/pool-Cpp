/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:14:56 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/22 16:00:32 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weap ) : weapon( weap ) {
	
	this->name = name;
}

void HumanA::attack( void ) {

	std::cout << this->name << " attack with thier " << this->weapon.getType() << std::endl;
}