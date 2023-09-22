/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:24:29 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/20 15:53:55 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
	
	public:
		void announce( void );
		Zombie( std::string name );
		~Zombie( void );

	private:
		std::string name;
};

void randomChump( std::string name );
Zombie *newZombie( std::string name );

#endif