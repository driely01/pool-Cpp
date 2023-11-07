/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:43:36 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/07 15:58:56 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

Whatever::Whatever( void ) { }

Whatever::Whatever( const Whatever &other ) {

	*this = other;
}

Whatever::~Whatever( void ) { }

Whatever &Whatever::operator=( const Whatever &rhs ){

	if ( this == &rhs )
		return *this;
	*this = rhs;
	return *this;
}
