/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:28:32 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/14 13:30:30 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main( void ) {
	
	ClapTrap a( "jack" );
	ClapTrap b( "player one" );
	ScavTrap scav( "mike" );
	FragTrap f( "folly" );
	std::cout << std::endl;

	a.attack( "jully" );
	a.beRepaired( 19 );
	a.takeDamage( 70 );
	std::cout << std::endl;
	
	scav.attack( "jack" );
	scav.beRepaired( 20 );
	scav.takeDamage( 90 );
	scav.guardGate();
	std::cout << std::endl;
	
	f.attack( "pedro" );
	f.beRepaired( 12 );
	f.takeDamage( 20 );
	f.highFivesGuys();
	std::cout << std::endl;
	return 0;
}