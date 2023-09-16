/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookUtils.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:46:46 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/16 17:00:32 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void printline() {
	
	int j;

	j = 0;
	while ( ++j <= 45 )
		std::cout << "-";
	std::cout << std::endl;
}

void resizeString( std::string *str ) {
	
	if ( (*str).length() > 10 ) {
			
		(*str).resize( 9 ); (*str).append( "." );
	}
}

int	checkValidIndex( std::string index ) {

	int i;

	i = 0;
	while ( index[i] ) {

		if ( std::isalpha(index[i]) ) {
			
			std::cout << std::endl << "bro chill!! next time enter a number from 0 to 7." << std::endl << std::endl;
			return 0;
		}
		i++;
	}
	return 1;
}

int enterAndCheckIndex( int *indexInt ) {

	std::string index;
	
	std::cout << "enter index: ";
	if ( std::getline( std::cin, index ).eof() )
		return 0;
	while ( index.empty() ) {
		
		std::cout << "enter index: ";
		if ( std::getline( std::cin, index ).eof() )
			return 0;
	}
	if ( !checkValidIndex( index ) )
		return 0;
	*indexInt = std::atoi( index.c_str() );
	while ( *indexInt < 0 || *indexInt >= 8 ) {
		
		if ( !checkValidIndex( index ) )
			return 0;
		std::cout << std::endl << "invalid index please enter a valid one." << std::endl << std::endl;
		std::cout << "enter index: ";
		if ( std::getline( std::cin, index ).eof() )
			return 0;
		*indexInt = std::atoi( index.c_str() );
	}
	return 1;
}

void printHeaders() {

	std::cout <<
		"|" << std::setw(10) << "Index"			<<
		"|" << std::setw(10) << "First Name"	<<
		"|"	<< std::setw(10) << "Last Name"		<<
		"|" << std::setw(10) << "Nick Name"		<<
		"|"	<< std::endl;
}

int checkXNames( std::string str, std::string xName ) {
	
	int i;
	
	i = 0;
	if ( str.empty() )
		return 0;

	while ( str[i] ) {
		
		if (!std::isalpha(str[i]) && str[i] != ' ' ) {
			
			std::cout << std::endl << xName << " is invalid please enter a valid one." << std::endl << std::endl;
			return 0;
		}
		i++;
	}
	return 1;
}

int checkPhoneNumber( std::string phone ) {

	int i;
	
	i = 0;
	if ( phone.empty() )
		return 0;

	if ( phone.length() < 3 || phone.length() > 14 ) {
		
		std::cout << std::endl << "phone number is invalid please enter a valid one." << std::endl << std::endl;
		return 0;
	}
	while ( phone[i] ) {

		if ( phone[i] == '+' ) {
			
			if ( i != 0 ) {
				
				std::cout << std::endl << "phone number is invalid please enter a valid one." << std::endl << std::endl;
				return 0;
			}
		} else if ( !std::isdigit( phone[i] ) ) {
			
			std::cout << std::endl << "phone number is invalid please enter a valid one." << std::endl << std::endl;
			return 0;
		}
		i++;
	}
	return 1;
}