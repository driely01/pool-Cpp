/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:18:56 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/09 16:18:57 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer( void ) { }

Serializer::Serializer( const Serializer &other ) {
	
	*this = other;
}

Serializer::~Serializer( void ) { }

Serializer &Serializer::operator=( const Serializer &rhs ) {

	if ( this == &rhs )
		return *this;
	*this = rhs;
	return *this;
}

uintptr_t Serializer::serialize( Data *ptr ) {

	return (reinterpret_cast<uintptr_t>( ptr ));
}

Data *Serializer::deserialize( uintptr_t raw ) {

	return reinterpret_cast<Data *>( raw );
}