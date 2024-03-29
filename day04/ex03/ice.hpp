/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:53:57 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/18 18:33:33 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {

	public:
		Ice( void );
		Ice( const Ice &other );
		~Ice( void );
		Ice &operator=( const Ice &rhs );
		
		AMateria *clone( void ) const;
		void use( ICharacter &target );
};

#endif