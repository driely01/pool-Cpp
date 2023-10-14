/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:23:24 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/14 12:29:48 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : x( 0 ), y( 0 ) { }

Point::Point( const float valX, const float valY ) : x( valX ), y( valY ) { }

Point::Point( const Point& other ) {

	*this = other;
}

Point::~Point( void ) { };

void Point::operator=( const Point& rhs ) {

	(Fixed)this->x = rhs.x;
	(Fixed)this->y = rhs.y;
}

Fixed Point::shoelaceArea( Point a, Point b, Point c ) const {

	Fixed area;

	area = area + ( a.x * ( b.y - c.y ) + b.x * ( c.y - a.y ) + c.x * ( a.y - b.y ) );
	return Fixed( 0.5f ) * ft_abs( area );
}