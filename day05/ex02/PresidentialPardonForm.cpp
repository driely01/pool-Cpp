/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:38:14 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/03 18:29:52 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm( "Presidential Pardon Form", 25, 5 ), target( "anonyme" ) { }

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm( "Presidential Pardon Form", 25, 5 ), target( target ) { }

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

	if ( executor.signForm( (AForm &)*this ) && executor.getGrade() <= this->getExecGrade() ) {

		std::cout << this->target << " has been pardoned by Zaphoned Beeblebrox" << std::endl;
		return 1;
	} else {
		
		throw Bureaucrat::GradeTooLowException();
		return 0;
	}
}