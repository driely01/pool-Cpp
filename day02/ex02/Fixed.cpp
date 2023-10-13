/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:57:29 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/12 21:57:38 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <fstream>

const int Fixed::store = 8;

Fixed::Fixed( void ) : fixdPoint( 0 ) { }

Fixed::Fixed( const Fixed& other ) {
	
	*this = other;
}

Fixed::Fixed( const int value ) : fixdPoint(value * ( 1 << Fixed::store ) ) { }

Fixed::Fixed( const float floating ) : fixdPoint( roundf( floating * ( 1 << Fixed::store ) ) ) { }

Fixed::~Fixed( void ) { }

int Fixed::getRawBits( void ) const {
	
	return this->fixdPoint;
}

void Fixed::setRawBits( int const raw ) {

	this->fixdPoint = raw;
}

float Fixed::toFloat( void ) const {

	return ( float )( this->fixdPoint / ( float )( 1 << Fixed::store ) );
}

int Fixed::toInt( void ) const {

	return this->fixdPoint >> Fixed::store;
}

void Fixed::operator=( const Fixed& rhs ) {

	this->setRawBits( rhs.fixdPoint );
}

std::ostream& operator<<( std::ostream& o, const Fixed& rhs ) {

	o << rhs.toFloat();
	return o;
}

bool Fixed::operator<( const Fixed & rhs ) {

	return (this->fixdPoint < rhs.fixdPoint) ? 1 : 0;
}

bool Fixed::operator>( const Fixed & rhs ) {

	return (this->fixdPoint > rhs.fixdPoint) ? 1 : 0;
}

bool Fixed::operator<=( const Fixed & rhs ) {

	return (this->fixdPoint <= rhs.fixdPoint) ? 1 : 0;
}

bool Fixed::operator>=( const Fixed & rhs ) {

	return (this->fixdPoint >= rhs.fixdPoint) ? 1 : 0;
}

bool Fixed::operator==( const Fixed & rhs ) {

	return (this->fixdPoint == rhs.fixdPoint) ? 1 : 0;
}

bool Fixed::operator!=( const Fixed & rhs ) {

	return (this->fixdPoint != rhs.fixdPoint) ? 1 : 0;
}

Fixed Fixed::operator+( const Fixed & rhs ) {

	return Fixed( this->toFloat() + rhs.toFloat() );
}

Fixed Fixed::operator*( const Fixed & rhs ) {

	return Fixed( this->toFloat() * rhs.toFloat() );
}

Fixed Fixed::operator-( const Fixed & rhs ) {

	return Fixed( this->toFloat() - rhs.toFloat() );
}

Fixed Fixed::operator/( const Fixed & rhs ) {

	return Fixed( this->toFloat() / rhs.toFloat() );
}

Fixed& Fixed::operator--( void ) {

	this->fixdPoint -= 1;
	return *this;
}

Fixed Fixed::operator--( int ) {

	Fixed tmp( this->fixdPoint * toFloat() );
	
	this->fixdPoint -= 1;
	return tmp;
}

Fixed& Fixed::operator++( void ) {

	this->fixdPoint += 1;
	return *this;
}

Fixed Fixed::operator++( int ) {

	Fixed tmp( this->fixdPoint * toFloat() );
	
	this->fixdPoint += 1;
	return tmp;
}

Fixed& Fixed::min( Fixed& rhs, Fixed& lhs ) {

	return ( rhs.fixdPoint < lhs.fixdPoint ) ? rhs : lhs;
}

const Fixed& Fixed::min( const Fixed& rhs, const Fixed& lhs ) {

	return ( rhs.fixdPoint < lhs.fixdPoint ) ? rhs : lhs;
}

Fixed& Fixed::max( Fixed& rhs, Fixed& lhs ) {

	return ( rhs.getRawBits() > lhs.getRawBits() ) ? rhs : lhs;
}

const Fixed& Fixed::max( const Fixed& rhs, const Fixed& lhs ) {

	return ( rhs.getRawBits() > lhs.getRawBits() ) ? rhs : lhs;
}