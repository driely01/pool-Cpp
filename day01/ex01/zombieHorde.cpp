/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:58:24 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/21 15:16:37 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name ) {
	
	int i;
	Zombie *zombie;

	i = 0;
	if ( N <= 0 ) {

		std::cout << "please enter a number greater than zero." << std::endl;
		return NULL;
	}

	zombie = new ( std::nothrow ) Zombie[N];
	if ( !zombie ) {

		std::cout << "error: new: cant allocate the memory." << std::endl;
	} else {
		
		while ( i < N )
			zombie[i++].setName( name );
	}
	return zombie;
}