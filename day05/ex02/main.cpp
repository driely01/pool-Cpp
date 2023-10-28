/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:20:14 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/28 15:58:21 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main( void ) {

	try {
		
		//robot
		RobotomyRequestForm robot( "robot", 72, 45 );
		Bureaucrat b( "bureau1", 3 );
		AForm &form = robot;

		std::cout << form << std::endl;
		form.beSigned( b );
		form.execute( b );
		std::cout << std::endl;
		
		//presidon
		PresidentialPardonForm presidon( "presidon", 25, 5 );
		Bureaucrat b1( "bureau2", 25 );
		AForm &form1 = presidon;
		std::cout << form1 << std::endl;
		form1.beSigned( b1 );
		form1.execute( b1 );
		std::cout << std::endl;

		//shrubbery
		ShrubberyCreationForm shrubbery( "shrubbery", 145, 137 );
		Bureaucrat b2( "bureau3", 145 );
		AForm &form2 = shrubbery;

		std::cout << form2 << std::endl;
		form2.beSigned( b2 );
		form2.execute( b2 );
	} catch( std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	return 0;
}