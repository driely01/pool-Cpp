/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:54:13 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/16 13:54:58 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName( std::string fName ) {
	
	this->_firstName = fName;
}

std::string Contact::getFirstName() const {
	
	return this->_firstName;
}

void Contact::setLastName( std::string lName ) {

	this->_lastName = lName;
}

std::string Contact::getLastName() const {

	return this->_lastName;
}

void Contact::setNickName( std::string nName ) {
	
	this->_nickname = nName;
}

std::string Contact::getNickName() const {

	return this->_nickname;
}

void Contact::setPhoneNumber( std::string pNumber ) {

	this->_phoneNumber = pNumber;
}

std::string Contact::getPhoneNumber() const {

	return this->_phoneNumber;
}

void Contact::setDarkestSecret( std::string secret ) {

	this->_darkestSecret = secret;
}

std::string Contact::getDarkestSecret() const {

	return this->_darkestSecret;
}