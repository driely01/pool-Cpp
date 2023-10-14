/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:23:29 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/14 12:10:49 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"

class Point {

	private:
		Fixed const x;
		Fixed const y;
	
	public:
		Point( void );
		Point( const float x, const float y );
		Point( const Point& other );
		void operator=( const Point& rhs );
		~Point( void );
		Fixed shoelaceArea( Point a, Point b, Point c ) const;
};

bool  bsp( Point const a, Point const b, Point const c, Point const point );
Fixed ft_abs( Fixed value );

#endif