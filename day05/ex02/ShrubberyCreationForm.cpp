/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:00:18 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/27 18:19:09 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void ) : target( "anonyme" ) { }

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : target( target ) { }

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &other ) {

	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) { }

ShrubberyCreationForm &ShrubberyCreationForm::operator=( const ShrubberyCreationForm &rhs ) {

	if ( this == &rhs )
		return *this;
	this->target = rhs.target;
	return *this;
}

void ShrubberyCreationForm::execute( Bureaucrat const &executor ) const {

	if ( this->getSignGrade() <= 145 && this->getExecGrade() <= 137 ) {
		
		std::ofstream outFile( this->target + "_shrubbery" );
		if ( !outFile ) {
			
			std::cout << "error: open: cannot open this outfile." << std::endl;
			return;
		}
		outFile << "                                                         .\
                                              .         ;  \
                 .              .              ;%     ;;   \
                   ,           ,                :;%  %;   \
                    :         ;                   :;%;'     .,   \
           ,.        %;     %;            ;        %;'    ,;\
             ;       ;%;  %%;        ,     %;    ;%;    ,%'\
              %;       %;%;      ,  ;       %;  ;%;   ,%;' \
               ;%;      %;        ;%;        % ;%;  ,%;'\
                `%;.     ;%;     %;'         `;%%;.%;'\
                 `:;%.    ;%%. %@;        %; ;@%;%'\
                    `:%;.  :;bd%;          %;@%;'\
                      `@%:.  :;%.         ;@@%;'   \
                        `@%.  `;@%.      ;@@%;         \
                          `@%%. `@%%    ;@@%;        \
                            ;@%. :@%%  %@@%;       \
                              %@bd%%%bd%%:;     \
                                #@%%%%%:;;\
                                %@@%%%::;\
                                %@@@%(o);  . '         \
                                %@@@o%;:(.,'         \
                            `.. %@@@o%::;         \
                               `)@@@o%::;         \
                                %@@(o)::;        \
                               .%@@@@%::;         \
                               ;%@@@@%::;.          \
                              ;%@@@@%%:;;;. \
                          ...;%@@@@@%%:;;;;,..";
	}
}