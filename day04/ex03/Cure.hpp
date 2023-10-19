/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:43:18 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/18 18:55:17 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {

	public:
		Cure( void );
		Cure( const Cure &other );
		~Cure( void );
		Cure &operator=( const Cure &rhs );
		
		AMateria *clone( void ) const;
		void use( ICharacter &target );
};

#endif