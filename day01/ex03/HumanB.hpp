/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:15:15 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/22 16:15:52 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB {
	
	public:
		void attack( void );
		HumanB( std::string name );
		void setWeapon( Weapon &weap );
	
	private:
		Weapon *weapon;
		std::string name;
};

#endif