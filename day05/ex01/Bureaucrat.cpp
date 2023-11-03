/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:39:28 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/03 15:51:06 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat( void ) : name( "anonyme buareu" ), grade( 150 ) { }

Bureaucrat::Bureaucrat( const std::string name, int grade ) : name( name ), grade( grade ) {

	if ( this->grade < 1 )
		throw GradeTooHightException();
	else if ( this->grade > 150 )
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat( const Bureaucrat &other ) {

	*this = other;
}

Bureaucrat::~Bureaucrat( void ) { }

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &rhs ) {

	if ( this == &rhs )
		return *this;
	( std::string & ) this->name = rhs.name;
	this->grade = rhs.grade;
	return *this;
}

std::string Bureaucrat::getName( void ) const {

	return this->name;
}

int Bureaucrat::getGrade( void ) const {
	
	return this->grade;
}

void Bureaucrat::incrementGrade( void ) {

	this->grade -= 1;
}

void Bureaucrat::decrementGrade( void ) {

	this->grade += 1;
}

std::ostream &operator<<( std::ostream &o, const Bureaucrat &rhs ) {
	
	o << rhs.getName() << ", beaurucrat grade " << rhs.getGrade();
	return o;
}

const char * Bureaucrat::GradeTooHightException::what( void ) const throw() {

	return "the grade is too hight!";
}

const char * Bureaucrat::GradeTooLowException::what( void ) const throw() {
	
	return "the grade is too low!";
}

void Bureaucrat::signForm( Form form ) const {

	// GradeTooLowException e;
	
	// if ( form.getSign() == true && this->grade <= form.getSignGrade())
	// 	std::cout << this->getName() << " signed " << form.getName() << std::endl;
	// else
	// 	std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	try {

		form.beSigned( *this );
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	} catch ( std::exception &e ) {

		std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}