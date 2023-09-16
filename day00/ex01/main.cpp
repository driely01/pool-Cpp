/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:08:36 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/16 17:03:59 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main() {
	
	std::string command;
	PhoneBook contact;
	
	while ( 1 ) {
		
		std::cout << "command ~> ";
		if ( std::getline( std::cin, command ).eof() )
			break;
		if ( command == "ADD" )  {
			if ( !contact.setContact() )
				break;
		}
		else if ( command == "SEARCH" )
			contact.getContacts();
		else if ( command == "EXIT" )
			break;
		else if ( command.empty() )
			continue;
		else {
			
			std::cout << std::endl << "invalid command please enter a valid one." << std::endl;
			std::cout << "	> ADD:		save a new contact" << std::endl;
			std::cout << "	> SEARCH:	display a specific contact" << std::endl;
			std::cout << "	> EXIT:		exit the program" << std::endl << std::endl;
		}
	}
	return 0;
}