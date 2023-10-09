/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:23:24 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/09 21:19:11 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) { }

Point::Point( const float valX, const float valY ) : x( valX ), y( valY ) { }

Point::Point( const Point& other ) {

	*this = other;
}

Point::~Point( void ) { };

void Point::operator=( const Point& rhs ) {

	(void) rhs;
}

double Point::shoelaceArea( Point p2, Point p3 ) const {

	double area = 0.0;

	area += (
		
				this->x.toFloat() * (p2.y.toFloat() - p3.y.toFloat() ) +
			    p2.x.toFloat() * ( p3.y.toFloat() - this->y.toFloat() ) +
				p3.x.toFloat() * ( this->y.toFloat() - p2.y.toFloat() )
			);

	return 0.5 * std::abs( area );
}