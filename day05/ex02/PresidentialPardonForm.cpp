/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:38:14 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/28 15:57:38 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : target( "anonyme" ) { }

PresidentialPardonForm::PresidentialPardonForm( const std::string name, const int signGrade, const int execGrade ) : AForm( name, signGrade, execGrade ), target( name ) { }

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : target( target ) { }

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &other ) {

	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) { }

PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &rhs ) {

	if ( this == &rhs )
		return *this;
	this->target = rhs.target;
	return *this;
}

int PresidentialPardonForm::execute( Bureaucrat const &executor ) const {

	if ( executor.signForm( (AForm &)*this ) && this->getExecGrade() <= 5 && this->getSignGrade() <= 25 ) {

		std::cout << this->target << " has been pardoned by Zaphoned Beeblebrox" << std::endl;
		return 1;
	} else {
		
		throw Bureaucrat::GradeTooLowException();
		return 0;
	}
}