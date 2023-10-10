/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:23:19 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/10 15:43:45 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int main() {

	if ( bsp( Point( 1, 1 ), Point( 3, 4 ), Point( 4, 1 ), Point( 2, 2 ) ) )
		std::cout << "yes the point is inside the triangle" << std::endl;
	else
		std::cout << "nah the point isn't inside the triangle" << std::endl;
	return 0;
}