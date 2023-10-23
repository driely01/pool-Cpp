/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:35:10 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/23 22:39:21 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( const std::string name, const int signGrade, const int execGrade )
	: name( name ), sign( false ), signGrade( signGrade ), execGrade( execGrade ) {
		
	if ( this->signGrade < 1 || this->execGrade < 1 )
		throw GradeTooHightException();
	else if ( this->signGrade > 150 || this->execGrade > 150 )
		throw GradeTooLowException();
}

Form::Form( const Form &other )
	: name( other.name ), sign( other.sign ), signGrade( other.signGrade ), execGrade( other.execGrade ) {
		
	if ( this->signGrade < 1 || this->execGrade < 1 )
		throw GradeTooHightException();
	else if ( this->signGrade > 150 || this->execGrade > 150 )
		throw GradeTooLowException();
}

Form::~Form( void ) { }

Form &Form::operator=( const Form &rhs ) {

	if ( this == &rhs )
		return *this;
	( std::string & ) this->name = rhs.name;
	this->sign = rhs.sign;
	( int & ) this->signGrade = rhs.signGrade;
	( int & ) this->execGrade = rhs.execGrade;
	return *this;
}

std::string Form::getName( void ) const {

	return this->name;
}

int Form::getSignGrade( void ) const {

	return this->signGrade;
}

int Form::getExecGrade( void ) const {

	return this->execGrade;
}

bool Form::getSign( void ) const {

	return this->sign;
}

const char *Form::GradeTooLowException::what( void ) const throw() {

	return "the form grade is too low!";
}

const char *Form::GradeTooHightException::what( void ) const throw() {

	return "the form grade is too hight!";
}

void Form::beSigned( Bureaucrat bureau ) {

	if ( bureau.getGrade() <= this->signGrade )
		this->sign = true;
	else
		throw GradeTooLowException();
}

std::ostream &operator<<( std::ostream &o, const Form &rhs ) {
	
	o	<< rhs.getName()
		<< ", the sign is " 					<< rhs.getSign()
		<< ", the required grade to sign is "	<< rhs.getSignGrade()
		<< " and the execution grade is " 		<< rhs.getExecGrade();
	return o;
}