/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:55:09 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/14 16:58:55 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {

	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		~ScavTrap( void );
		void attack( std::string target );
		void guardGate( void );
};

#endif