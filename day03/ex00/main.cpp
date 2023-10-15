/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:28:32 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/15 17:31:14 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main( void ) {
	
	ClapTrap a( "jack" );
	ClapTrap b( "player one" );
	std::cout << std::endl;
	

	a.attack( "jully" );
	a.beRepaired( 19 );
	a.takeDamage( 50 );
	std::cout << std::endl;
	
	b.attack( "jully" );
	b.beRepaired( 19 );
	b.takeDamage( 6 );
	std::cout << std::endl;
	
	ClapTrap c;
	std::cout << std::endl;
	
	c.attack( "jully" );
	c.beRepaired( 19 );
	c.takeDamage( 70 );
	std::cout << std::endl;
	
	c = a;
	std::cout << std::endl;
	
	c.attack( "jully" );
	c.beRepaired( 19 );
	c.takeDamage( 5 );
	std::cout << std::endl;
	
	b = c;
	std::cout << std::endl;
	
	b.attack( "jully" );
	b.beRepaired( 19 );
	b.takeDamage( 5 );
	std::cout << std::endl;

	
	return 0;
}