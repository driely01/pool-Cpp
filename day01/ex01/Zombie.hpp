/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:58:27 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/21 15:46:24 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
	
	public:
		void announce( void );
		void setName( std::string name );
		Zombie( void );
		~Zombie( void );
		
	private:
		std::string name;
};

Zombie *zombieHorde( int N, std::string name );

#endif