/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:38:14 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/23 16:33:12 by del-yaag         ###   ########.fr       */
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

void PresidentialPardonForm::execute( Bureaucrat const &executor ) const {

	if ( this->getSign() && executor.getGrade() <= this->getExecGrade() ) 
		std::cout << this->target << " has been pardoned by Zaphoned Beeblebrox" << std::endl;
	else 
		throw Bureaucrat::GradeTooLowException();

}