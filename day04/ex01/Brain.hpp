/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:36:43 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/18 13:36:30 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	
	private:
		std::string ideas[100];
	
	public:
		Brain( void );
		Brain( const Brain &other );
		~Brain( void );
		Brain &operator=( const Brain &rhs );
		
		// geter and seter
		std::string getIdea( const unsigned int index ) const;
		void setIdea( const unsigned int index );
};

#endif