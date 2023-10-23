/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:39:28 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/23 17:22:56 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, int grade ) : name( name ), grade( grade ) { }

Bureaucrat::Bureaucrat( const Bureaucrat &other ) {

	*this = other;
}

Bureaucrat::~Bureaucrat( void ) { }

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &rhs ) {

	if ( this == &rhs )
		return *this;
	// what about name is const
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