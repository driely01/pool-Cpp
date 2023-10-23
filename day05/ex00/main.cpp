/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:39:24 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/23 18:05:42 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void ) {

	Bureaucrat b( "hassan", 150 );
	Bureaucrat c( "mike", 150 );
	
	try {

		b.incrementGrade();
		std::cout << b << std::endl;
	}
	catch ( Bureaucrat::GradeTooHightException& e ) {

		std::cout << e.what() << std::endl;
	}
	
	try {

		c.decrementGrade();
		std::cout << b << std::endl;
	}
	catch ( Bureaucrat::GradeTooLowException& e1 ) {

		std::cout << e1.what() << std::endl;
	}
	return 0;
}