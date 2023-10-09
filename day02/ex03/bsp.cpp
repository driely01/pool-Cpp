/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:23:09 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/09 21:14:05 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point ) {

	double totalArea = a.shoelaceArea( a, c );
	double area1 = point.shoelaceArea( b, c );
	double area2 = a.shoelaceArea( point, c );
	double area3 = a.shoelaceArea( b, point );

	return std::abs( totalArea - ( area1 + area2 + area3 ) ) < 0.000001;
}