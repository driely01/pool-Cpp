/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:28:32 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/11 16:08:20 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main( void ) {
	
	ClapTrap a( "jack" );
	ClapTrap b( "player one" );
	ClapTrap c = a;

	a.attack( "jully" );
	a.beRepaired( 19 );
	a.takeDamage( 70 );
	c.takeDamage( 5 );
	return 0;
}