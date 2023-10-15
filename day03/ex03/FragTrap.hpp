/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 21:21:33 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/15 17:14:34 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

	public:
		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( const FragTrap &other );
		~FragTrap( void );
		
		void operator=( const FragTrap &rhs );
		
		void highFivesGuys( void );
};

#endif