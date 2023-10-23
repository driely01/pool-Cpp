/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:39:24 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/23 17:31:05 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void ) {

	Bureaucrat b( "hassan", 150 );
	Bureaucrat c( "mike", 150 );
	
	try {

		b.incrementGrade();
		if ( b.getGrade() < 1 )
			throw Bureaucrat::GradeTooHightException();
		std::cout << b << std::endl;
	}
	catch ( Bureaucrat::GradeTooHightException& e ) {

		std::cout << e.what() << std::endl;
	}
	
	try {

		c.decrementGrade();
		if ( c.getGrade() > 150 )
			throw Bureaucrat::GradeTooLowException();
		std::cout << b << std::endl;
	}
	catch ( Bureaucrat::GradeTooLowException& e1 ) {

		std::cout << e1.what() << std::endl;
	}
	return 0;
}