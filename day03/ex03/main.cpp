/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:28:32 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/15 18:39:26 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main( void ) {
	
	DiamondTrap d;
	DiamondTrap d1( "jackob" );
	ScavTrap s;
	ScavTrap s1( "susan" );

	std::cout << std::endl;
	d = d1;
	s = s1;

	std::cout << std::endl;
	s.attack( "hark" );
	
	std::cout << std::endl;
	d.ScavTrap::attack( "jullia" );
	d.takeDamage( 15 );
	d.beRepaired( 10 );
	d.guardGate();
	d.highFivesGuys();
	d.whoAmI();
	std::cout << std::endl;
	
	d1.beRepaired( 200 );
	d1.ScavTrap::attack( "mike" );
	d1.highFivesGuys();
	d1.takeDamage( 10 );
	d1.whoAmI();
	std::cout << std::endl;
	return 0;
}