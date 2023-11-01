/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:20:14 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/01 14:49:29 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main( void ) {

	try {
		
		Intern intern;
		AForm *form;

		form = intern.makeForm( "presidential pardon", "bender" );
		std::cout << *form << std::endl;
	} catch( std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	return 0;
}