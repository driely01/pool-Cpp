/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:32:41 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/17 15:45:31 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	private:
		Brain *brain;

	public:
		Cat( void );
		Cat( const Cat &other );
		~Cat( void );

		void operator=( const Cat &rhs );

		void makeSound( void ) const;
};

#endif