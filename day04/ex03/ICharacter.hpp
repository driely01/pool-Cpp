/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:50:03 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/18 15:37:36 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>

class ICharacter {

	public:
		virtual ~ICharacter( void ) {};
		virtual std::string const &getName( void ) const = 0;
		virtual void equipe( AMateria *m ) = 0;	
		virtual void unequipe( int idx ) = 0;
		virtual void use( int idx, ICharacter &target ) = 0;
};

#endif