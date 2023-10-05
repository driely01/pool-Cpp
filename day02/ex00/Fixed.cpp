/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:42:56 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/05 17:59:45 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::store = 0;

Fixed::Fixed( void ) {
	
	std::cout << "Default constructor called" << std::endl;
	this->fixedPoint = 0;
}

Fixed::Fixed( const Fixed& other ) : fixedPoint(other.fixedPoint) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed& rhs ) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPoint = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPoint;
}

void Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPoint = raw;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
}