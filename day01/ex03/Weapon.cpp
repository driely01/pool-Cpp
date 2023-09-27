/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:14:09 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/27 15:44:08 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) {

	this->type = type;
}

const std::string& Weapon::getType( void ) const {
	
	return this->type;
}

void Weapon::setType( std::string type ) {
	
	this->type = type;
}