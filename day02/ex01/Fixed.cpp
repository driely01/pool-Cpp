/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:07:46 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/14 15:34:03 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>
#include <iostream>

const int Fixed::store = 8;

Fixed::Fixed( void ) : fixedPoint( 0 ) {

	std::cout << "Default constructor called" << std::endl;
	this->fixedPoint = 0;
}

Fixed::Fixed( const Fixed& other ) : fixedPoint( other.fixedPoint ) {

	std::cout << "Coppy constructor called" << std::endl;
}

Fixed::Fixed( const int value ) : fixedPoint( value * ( 1 << Fixed::store ) ) {

	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float floating ) : fixedPoint( roundf( floating * ( 1 << Fixed::store ) ) ) {

	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {

	return this->fixedPoint;
}

void Fixed::setRawBits( int const raw ) {

	this->fixedPoint = raw;
}

float Fixed::toFloat( void ) const {

	return ( float )( this->fixedPoint / ( float )( 1 << Fixed::store ) );
}

int Fixed::toInt( void ) const {

	return this->fixedPoint >> Fixed::store;
}

void Fixed::operator=( const Fixed& rhs ) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits( rhs.fixedPoint );
}

std::ostream& operator<<( std::ostream & o, const Fixed& rhs ) {

	o << rhs.toFloat();
	return o;
}