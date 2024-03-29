/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:57:33 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/19 15:56:36 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {

	private:
		std::string name;
		AMateria *inventory[4];
		AMateria *garbage[1024];

	public:
		Character( void );
		Character( std::string name );
		Character( const Character &other );
		Character &operator=( const Character &rhs );
		~Character( void );
		
		std::string const &getName( void ) const;
		void equip( AMateria *m );	
		void unequip( int idx );
		void use( int idx, ICharacter &target );
};

#endif