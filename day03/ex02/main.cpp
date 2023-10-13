/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:28:32 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/13 21:57:38 by del-yaag         ###   ########.fr       */
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

	a.attack( "jully" );
	a.beRepaired( 19 );
	a.takeDamage( 70 );
	scav.attack( "jack" );
	scav.beRepaired( 20 );
	scav.takeDamage( 90 );
	scav.guardGate();
	f.attack( "pedro" );
	f.beRepaired( 12 );
	f.takeDamage( 20 );
	f.highFivesGuys();
	return 0;
}