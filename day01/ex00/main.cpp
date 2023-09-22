/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:26:17 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/20 15:49:05 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main( void ) {

	Zombie *zombie1;
	Zombie *zombie2;
	Zombie *zombie3;
	Zombie *zombie4;
	
	std::cout << std::endl;

	randomChump( "stack first" );
	randomChump( "stack second" );
	randomChump( "stack third" );
	
	std::cout << std::endl;
	
	zombie1 = newZombie( "heap first" );
	zombie2 = newZombie( "heap second" );
	zombie3 = newZombie( "heap third" );
	zombie4 = newZombie( "heap forth" );
	zombie1->announce();
	zombie2->announce();
	zombie3->announce();
	zombie4->announce();
	delete zombie1;
	delete zombie2;
	
	std::cout << std::endl;
	
	zombie1 = newZombie( "heap first again" );
	zombie2 = newZombie( "heap second again" );
	zombie1->announce();
	zombie2->announce();
	delete zombie1;
	delete zombie2;
	delete zombie3;
	delete zombie4;
	
	std::cout << std::endl;

	return 0;
}