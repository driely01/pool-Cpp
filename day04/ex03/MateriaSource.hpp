/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:06:32 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/19 16:17:38 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	
	private:
		AMateria *inventory[4];
		
	public:
		MateriaSource( void );
		MateriaSource( const MateriaSource &other );
		~MateriaSource( void );
		MateriaSource &operator=( const MateriaSource &rhs );
		
		void learnMateria( AMateria* materia );
		AMateria* createMateria( std::string const &type );
};

#endif