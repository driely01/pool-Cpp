/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:10:38 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/17 13:58:27 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLY_HPP
#define POLY_HPP

#include <iostream>

class Animal {

	protected:
		std::string type;
	
	public:
		Animal( void );
		Animal( const Animal &other );
		virtual ~Animal( void );
		
		Animal &operator=( const Animal &rhs );

		std::string getType( void ) const;
		virtual void makeSound( void ) const;
};

#endif