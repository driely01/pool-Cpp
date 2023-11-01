/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:24:23 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/01 14:43:17 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm( "Robotomy Request Form", 150, 150 ), target( "anonyme" ) { }

RobotomyRequestForm::RobotomyRequestForm( const std::string name, const int signGrade, const int execGrade ) : AForm( "Robotomy Request Form", signGrade, execGrade ), target( name ) { }

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm( "Robotomy Request Form", 150, 150 ), target( target ) { }

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &other ) {

	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) { }

RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &rhs ) {

	if ( this == &rhs )
		return *this;
	this->target = rhs.target;
	return *this;
}

int RobotomyRequestForm::execute( Bureaucrat const &executor ) const {

	if ( executor.signForm( (AForm &)*this ) && this->getSignGrade() <= 72 && this->getExecGrade() <= 45 ) {

		int randN;
		
		srand( time( NULL ) );
		randN = rand() % 100 + 1;
		
		if ( randN % 2 == 0 ) {

			std::cout << this->target << " has been robotomized successfully 50% of the time" << std::endl;
		} else {

			std::cout << "the robotomy failed" << std::endl;
		}
		return 1;
	} else {
		
		throw Bureaucrat::GradeTooLowException();
		return 0;
	}
}