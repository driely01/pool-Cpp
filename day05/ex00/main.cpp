/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:39:24 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/23 15:30:06 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void ) {
	
	try {

		Bureaucrat b;
		Bureaucrat c( "mike", 150 );
		b.incrementGrade();
		std::cout << b << std::endl;
		c.decrementGrade();
		std::cout << b << std::endl;
		
	} catch ( std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	return 0;
}