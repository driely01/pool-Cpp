/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:14:09 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/22 15:11:45 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) {

	this->type = type;
}

const std::string& Weapon::getType( void ) {
	
	const std::string& typeREF = this->type;
	return typeREF;
}

void Weapon::setType( std::string type ) {
	
	this->type = type;
}