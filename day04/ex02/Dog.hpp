/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:23:57 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/17 15:48:43 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

	private:
		Brain *brain;

	public:
		Dog( void );
		Dog( const Dog &other );
		~Dog( void );

		void operator=( const Dog &rhs );

		void makeSound( void ) const;
};

#endif