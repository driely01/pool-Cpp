/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:23:24 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/10 15:22:24 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : x( 0 ), y( 0 ) { }

Point::Point( const float valX, const float valY ) : x( valX ), y( valY ) { }

Point::Point( const Point& other ) : x( other.x ), y( other.y ) {

	*this = other;
}

Point::~Point( void ) { };

void Point::operator=( const Point& rhs ) {

	(Fixed)this->x = rhs.x;
	(Fixed)this->y = rhs.y;
}

float Point::shoelaceArea( Point a, Point b, Point c ) const {

	float area = 0.0;

	area += (
				a.x.toFloat() * ( b.y.toFloat() - c.y.toFloat() ) +
				b.x.toFloat() * ( c.y.toFloat() - a.y.toFloat() ) +
				c.x.toFloat() * ( a.y.toFloat() - b.y.toFloat() ) 
			);
	return 0.5 * ft_abs( area );
}