/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:23:19 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/09 17:24:01 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int main() {
    // Define the vertices of the triangle and a test point
    // Point a(0.0, 0.0);
    // Point b(1.0, 0.0);
    // Point c(0.0, 1.0);
    // Point testPoint(0.5, 0.5);

    // // Use the bsp function to check if the test point is inside the triangle
    // bool inside = bsp(a, b, c, testPoint);

    // // Output the result
    // if (inside) {
    //     std::cout << "The point is inside the triangle." << std::endl;
    // } else {
    //     std::cout << "The point is outside the triangle." << std::endl;
    // }

	if (bsp(Point(0, 0), Point(0, 100), Point(100, 0), Point(50, 50)) == true)
        std::cout << "Point is in the triangle" << std::endl;
	else
        std::cout << "Point is not in the triangle" << std::endl;
	return 0;

    return 0;
}
