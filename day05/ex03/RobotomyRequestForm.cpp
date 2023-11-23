/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:24:23 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/23 16:50:51 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm( "Robotomy Request Form", 72, 45 ), target( "anonyme" ) { }

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm( "Robotomy Request Form", 72, 45 ), target( target ) { }

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

void RobotomyRequestForm::execute( Bureaucrat const &executor ) const {

	if ( this->getSign() && executor.getGrade() <= this->getExecGrade() ) {

		int randN;
		
		srand( time( NULL ) );
		randN = rand() % 100 + 1;
		
		if ( randN % 2 == 0 )
			std::cout << this->target << " has been robotomized successfully 50% of the time" << std::endl;
		else
			std::cout << "the robotomy failed" << std::endl;
		
	} else {
		
		throw Bureaucrat::GradeTooLowException();
	}
}