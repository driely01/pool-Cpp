/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:51:52 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/16 17:07:54 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <iomanip>

class Contact {
	
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
	
	public:
		void setFirstName( std::string fName );
		std::string getFirstName() const;
		
		void setLastName( std::string lName );
		std::string getLastName() const;
		
		void setNickName( std::string nName );
		std::string getNickName() const;
		
		void setPhoneNumber( std::string pNumber );
		std::string getPhoneNumber() const;
		
		void setDarkestSecret( std::string secret );
		std::string getDarkestSecret() const;
};

int enterAndCheckIndex( int *indexInt );
int	checkValidIndex( std::string index );
int checkPhoneNumber( std::string phone );
int checkXNames( std::string str, std::string xName );

void printline();
void printHeaders();
void resizeString( std::string *str );

#endif