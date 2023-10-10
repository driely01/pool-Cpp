/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:23:09 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/10 15:44:07 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

double ft_abs( double value ) {

	if ( value < 0 )
		return -value;
	return value;
}

bool  bsp( Point const a, Point const b, Point const c, Point const point) {

	double totalArea = a.shoelaceArea( a, b, c );
	double area1 = point.shoelaceArea( b, c, point );
	double area2 = a.shoelaceArea( point, c, a );
	double area3 = a.shoelaceArea( b, point, a );

	if ( !totalArea || !area1 || !area2 || !area3 )
		return false;
	return std::abs( totalArea - ( area1 + area2 + area3 ) ) < 1e-6;
}