/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:16:31 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/19 16:06:04 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include "ICharacter.hpp"

class AMateria {

	protected:
		std::string type;

	public:
		AMateria( void );
		AMateria( std::string const &type );
		AMateria( const AMateria &other );
		virtual ~AMateria( void );
		AMateria &operator=( const AMateria &rhs );

		std::string const &getType( void ) const;

		virtual AMateria* clone( void ) const = 0;
		virtual void use( ICharacter &target );
};

#endif