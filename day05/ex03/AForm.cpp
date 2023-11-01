/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:35:10 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/28 15:03:12 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( void ) : name( "anonyme Aform" ), sign( false ), signGrade( 25 ), execGrade( 5 ) {}

AForm::AForm( const std::string name, const int signGrade, const int execGrade )
	: name( name ), sign( false ), signGrade( signGrade ), execGrade( execGrade ) {
		
	if ( this->signGrade < 1 || this->execGrade < 1 )
		throw GradeTooHightException();
	else if ( this->signGrade > 150 || this->execGrade > 150 )
		throw GradeTooLowException();
}

AForm::AForm( const AForm &other )
	: name( other.name ), sign( other.sign ), signGrade( other.signGrade ), execGrade( other.execGrade ) {
		
	if ( this->signGrade < 1 || this->execGrade < 1 )
		throw GradeTooHightException();
	else if ( this->signGrade > 150 || this->execGrade > 150 )
		throw GradeTooLowException();
}

AForm::~AForm( void ) { }

AForm &AForm::operator=( const AForm &rhs ) {

	if ( this == &rhs )
		return *this;
	( std::string & ) this->name = rhs.name;
	this->sign = rhs.sign;
	( int & ) this->signGrade = rhs.signGrade;
	( int & ) this->execGrade = rhs.execGrade;
	return *this;
}

std::string AForm::getName( void ) const {

	return this->name;
}

int AForm::getSignGrade( void ) const {

	return this->signGrade;
}

int AForm::getExecGrade( void ) const {

	return this->execGrade;
}

bool AForm::getSign( void ) const {

	return this->sign;
}

const char *AForm::GradeTooLowException::what( void ) const throw() {

	return "the Aform grade is too low!";
}

const char *AForm::GradeTooHightException::what( void ) const throw() {

	return "the Aform grade is too hight!";
}

void AForm::beSigned( Bureaucrat bureau ) {

	if ( bureau.getGrade() <= this->signGrade )
		this->sign = true;
	else
		throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<( std::ostream &o, const AForm &rhs ) {
	
	o	<< rhs.getName()
		<< ", his sign is " 					<< rhs.getSign()
		<< ", his required grade to sign is "	<< rhs.getSignGrade()
		<< " and his execution grade is " 		<< rhs.getExecGrade();
	return o;
}