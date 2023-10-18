/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:59:53 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/17 14:09:30 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

	protected:
		std::string type;
	
	public:
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal &other );
		~WrongAnimal( void );
		
		WrongAnimal &operator=( const WrongAnimal &rhs );

		std::string getType( void ) const;
		void makeSound( void ) const;
};

#endif