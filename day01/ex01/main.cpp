/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:58:34 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/21 15:45:11 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void printZombies( Zombie *zombie, int n ) {

	for ( int i = 0; i < n; i++ ) {
		
		if ( !zombie )
			break;
		std::cout << "[" << i << "]";
		zombie[i].announce();
	}
}

int main( void ) {
	
	Zombie *zombie;
	Zombie *zombie1;
	Zombie *zombie2;
	Zombie zombie69;

	zombie69.setName( "stack zombie" );
	zombie69.announce();

	zombie = zombieHorde( 2, "zam zam" );
	printZombies( zombie, 2 );
	delete[] zombie;
	std::cout << std::endl;

	zombie1 = zombieHorde( 20, "the walking death" );
	printZombies( zombie1, 20 );
	delete[] zombie1;
	std::cout << std::endl;
	
	zombie2 = zombieHorde( 40, "zombies" );
	printZombies( zombie2, 40 );
	delete[] zombie2;
	
	return 0;
}