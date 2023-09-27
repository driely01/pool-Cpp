/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:17:35 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/27 15:44:20 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon {
	
	public:
		const std::string& getType( void ) const;
		void setType( std::string type );
		Weapon( std::string type );
	
	private:
		std::string type;
};

#endif