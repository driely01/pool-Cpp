/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:35:10 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/23 18:24:43 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( const std::string name, const int signGrade, const int execGrde ) : name( name ), sign( false ), signGrade( signGrade ), execGrade( execGrade ) { }

Form::Form( const Form &other ) : name( other.name ), sign( other.sign ), signGrade( other.signGrade ), execGrade( other.execGrade ){ }

Form::~Form( void ) { }

Form &Form::operator=( const Form &rhs ) {

	if ( this == &rhs )
		return *this;
	( std::string & ) this->name = rhs.name;
	this->sign = rhs.sign;
	( int & ) this->signGrade = rhs.signGrade;
	( int & ) this->execGrade = rhs.execGrade;
}

const std::string Form::getName( void ) const {

	return this->name;
}

const int Form::getSignGrade( void ) const {

	return this->signGrade;
}

const int Form::getExecGrade( void ) const {

	return this->execGrade;
}

bool Form::getSign( void ) const {

	return this->sign;
}