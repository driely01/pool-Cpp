/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:28:32 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/15 17:53:35 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main( void ) {
	
	ClapTrap a( "jack" );
	ClapTrap b( "player one" );
	ScavTrap scav( "mike" );
	ScavTrap s;
	std::cout << std::endl;

	a.attack( "jully" );
	a.beRepaired( 19 );
	a.takeDamage( 70 );
	std::cout << std::endl;
	
	b.attack( "jully" );
	b.beRepaired( 19 );
	b.takeDamage( 70 );
	std::cout << std::endl;
	
	scav.attack( "jack" );
	scav.beRepaired( 20 );
	scav.takeDamage( 90 );
	scav.guardGate();
	std::cout << std::endl;
	
	s.attack( "jack" );
	s.beRepaired( 20 );
	s.takeDamage( 90 );
	s.guardGate();
	std::cout << std::endl;

	s = scav;
	std::cout << std::endl;
	
	s.attack( "jack" );
	s.beRepaired( 20 );
	s.takeDamage( 90 );
	s.guardGate();
	std::cout << std::endl;
	return 0;
}