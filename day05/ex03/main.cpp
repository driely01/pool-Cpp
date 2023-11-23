/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:20:14 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/23 12:27:18 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main( void ) {

	try {
		
		Intern intern;
		AForm *form;
		Bureaucrat b( "hello", 150 );

		form = intern.makeForm( "shrubbery creation", "bender" );
		form->execute( b );
		std::cout << *form << std::endl;
	} catch( std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	return 0;
}