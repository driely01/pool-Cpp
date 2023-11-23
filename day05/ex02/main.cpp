/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:20:14 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/23 16:57:04 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main( void ) {

	try {
		
		//robot
		RobotomyRequestForm robot( "robot" );
		Bureaucrat b( "bureau1", 45 );
		AForm &form = robot;

		std::cout << form << std::endl;
		form.beSigned( b );
		b.executeForm( form );
		form.execute( b );
		std::cout << std::endl;
		
		// presidon
		PresidentialPardonForm presidon( "presidon" );
		Bureaucrat b1( "bureau2", 25 );
		
		for ( int i = 1; i < 25; i++ )
			b1.incrementGrade();

		std::cout << std::endl;
		AForm &form1 = presidon;
		std::cout << form1 << std::endl;
		form1.beSigned( b1 );
		form1.execute( b1 );
		std::cout << form1 << std::endl;
		std::cout << std::endl;

		// shrubbery
		ShrubberyCreationForm shrubbery( "shrubbery" );
		Bureaucrat b2( "bureau3", 137 );
		AForm &form2 = shrubbery;

		std::cout << form2 << std::endl;
		form2.beSigned( b2 );
		form2.execute( b2 );
	} catch( std::exception &e ) {

		std::cout << "from main program: " << e.what() << std::endl;
	}
	return 0;
}