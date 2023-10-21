/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:36:48 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/21 11:50:39 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {

	std::cout << "Brain constructor called" << std::endl;

	for ( int i = 0; i < 100; i++ )
		this->ideas[i] = "new idea";
}

Brain::Brain( const Brain &other ) {

	std::cout << "Brain copy assignment operator called" << std::endl;

	*this = other;
}

Brain::~Brain( void ) {

	std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=( const Brain &rhs ) {

	std::cout << "Brain copy assignment operator called" << std::endl;

	if ( this == &rhs )
		return *this;
	for ( int i = 0; i < 100; i++ )
		this->ideas[i] = rhs.ideas[i];
	return *this;
}

std::string Brain::getIdea( const unsigned int index ) const {

	if ( index < 0 || index > 99 ) {
		
		std::cout << "Brain invalid index" << std::endl;
		return "NULL";
	}
	else {

		return this->ideas[index];
	}
}

void Brain::setIdea( const unsigned int index ) {

	if ( index < 0 || index > 99 ) {

		std::cout << "Brain invalid index" << std::endl;
		return;
	}
	else {

		this->ideas[index] = "modified idea";
	}
}