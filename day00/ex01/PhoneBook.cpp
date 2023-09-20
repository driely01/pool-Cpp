/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:16:15 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/19 13:01:24 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {

	this->index = 0;
}

void PhoneBook::getContactIndex() const {
	
	int index;
	
	if ( !enterAndCheckIndex( &index ) )
		return;
		
	if ( this->contact[index].getFirstName().empty() ) {

		std::cout << std::endl << "this one is empty next time choose the other one." << std::endl << std::endl;
		return;
	}
	std::cout << std::endl;
	std::cout << "FIRST NAME:	"		<< this->contact[index].getFirstName()		<< std::endl;
	std::cout << "LAST NAME:	"		<< this->contact[index].getLastName()		<< std::endl;
	std::cout << "NICK NAME:	"		<< this->contact[index].getNickName()		<< std::endl;
	std::cout << "PHONE NUMBER:	"		<< this->contact[index].getPhoneNumber()	<< std::endl;
	std::cout << "DARKEST SECRET:	"	<< this->contact[index].getDarkestSecret()	<< std::endl;
	std::cout << std::endl;
}

void PhoneBook::getContacts() const {

	int i;
	std::string fName;
	std::string lName;
	std::string nName;
	std::string secret;
	std::string pNumber;
	
	
	std::cout << std::endl;
	printline();
	printHeaders();
	
	i = 0;
	while ( i < 8 ) {
		
		if ( !this->contact[i].getFirstName().empty() ) {

			printline();
			fName = this->contact[i].getFirstName();
			resizeString( &fName );

			lName = this->contact[i].getLastName();
			resizeString( &lName );

			nName = this->contact[i].getNickName();
			resizeString( &nName );

			pNumber = this->contact[i].getPhoneNumber();
			resizeString( &pNumber );
				
			secret = this->contact[i].getDarkestSecret();
			resizeString( &secret );

			std::cout <<
			"|" << std::setw(10) << i	<<
			"|" << std::setw(10) << fName	<<
			"|" << std::setw(10) << lName	<<
			"|" << std::setw(10) << nName	<<
			"|" << std::endl;
		}
		i++;
	}
	
	printline();
	std::cout << std::endl;
	
	getContactIndex();
}

int PhoneBook::setContact() {

	std::string fName;
	std::string lName;
	std::string nName;
	std::string secret;
	std::string pNumber;
	
	std::cout << "FIRST NAME:	";
	if ( std::getline( std::cin, fName ).eof() )
		return 0;
	while ( !checkXNames( fName, "first name" ) ) {
		
		std::cout << "FIRST NAME:	";
		if ( std::getline( std::cin, fName ).eof() )
			return 0;
	}
	
	std::cout << "LAST NAME:	";
	if ( std::getline( std::cin, lName ).eof() )
		return 0;
	while ( !checkXNames( lName, "last name" ) ) {
		
		std::cout << "LAST NAME:	";
		if ( std::getline( std::cin, lName ).eof() )
			return 0;
	}
	
	std::cout << "NICK NAME:	";
	if ( std::getline( std::cin, nName ).eof() )
		return 0;
	while ( nName.empty() ) {

		std::cout << "NICK NAME:	";
		if ( std::getline( std::cin, nName ).eof() )
			return 0;
	}
	
	std::cout << "PHONE NUMBER:	";
	if ( std::getline( std::cin, pNumber ).eof() )
		return 0;
	while ( !checkPhoneNumber( pNumber ) ) {
		
		std::cout << "PHONE NUMBER:	";
		if ( std::getline( std::cin, pNumber ).eof() )
			return 0;
	}
	
	std::cout << "DARKEST SECRET:	";
	if ( std::getline( std::cin, secret ).eof() )
		return 0;
	while ( secret.empty() ) {

		std::cout << "DARKEST SECRET:	";
		if ( std::getline( std::cin, secret ).eof() )
			return 0;
	}
	this->contact[this->index].setFirstName( fName );
	this->contact[this->index].setLastName( lName );
	this->contact[this->index].setNickName( nName );
	this->contact[this->index].setDarkestSecret( secret );
	this->contact[this->index].setPhoneNumber( pNumber );
	this->index++;
	if (this->index == 8)
		this->index = 0;
	return 1;
}