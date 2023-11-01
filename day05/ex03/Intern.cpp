/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:55:47 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/01 14:33:22 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern( void ) { }

Intern::Intern( const Intern &other ) {

	*this = other;
}

Intern::~Intern( void ) { }

Intern &Intern::operator=( const Intern &rhs ) {

	if ( this == &rhs )
		return *this;
	*this = rhs;
	return *this;
}

const char *Intern::NameIsntCorrectException::what( void ) const throw() {

	return "name isn't correct please enter the correct one. form not found";
}

AForm *newPresidential( std::string target ) {

	return new PresidentialPardonForm( target );
}

AForm *newShrubbery( std::string target ) {

	return new ShrubberyCreationForm( target );
}

AForm *newRobotomy( std::string target ) {

	return new RobotomyRequestForm( target );
}

AForm *Intern::makeForm( std::string name, std::string target ) {

	int i = 0;
	AForm *form;
	std::string names[3] = {"robotomy request", "shrubbery creation", "presidential pardon", };
	ptrFn ptrName[3] = { &newRobotomy, &newShrubbery, &newPresidential };
	
	while ( i < 3 ) {

		if ( name == names[i] ) {

			form = ptrName[i]( target );
			std::cout << "Intern creates " << form->getName() << std::endl;
			return form;
		}
		i++;
	}
	throw Intern::NameIsntCorrectException();
	return NULL;
}