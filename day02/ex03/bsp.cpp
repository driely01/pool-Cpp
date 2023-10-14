/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:23:09 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/14 19:12:35 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed ft_abs( Fixed value ) {

	if ( value < 0 )
		return value * -1;
	return value;
}

bool  bsp( Point const a, Point const b, Point const c, Point const point) {

	Fixed totalArea = a.shoelaceArea( a, b, c );
	Fixed area1 = point.shoelaceArea( b, c, point );
	Fixed area2 = a.shoelaceArea( point, c, a );
	Fixed area3 = a.shoelaceArea( b, point, a );

	if ( totalArea == 0 || area1 == 0 || area2 == 0 || area3 == 0 )
		return false;

	return ft_abs( totalArea - ( area1 + area2 + area3 ) ) == 0;
}