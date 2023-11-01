/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:00:18 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/01 14:44:18 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm( "Shrubbery Creation Form", 150, 150 ), target( "anonyme" ) { }

ShrubberyCreationForm::ShrubberyCreationForm( const std::string name, const int signGrade, const int execGrade ) : AForm( "Shrubbery Creation Form", signGrade, execGrade ), target( name ) { }

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm( "Shrubbery Creation Form", 150, 150 ), target( target ) { }

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

int ShrubberyCreationForm::execute( Bureaucrat const &executor ) const {

	if ( executor.signForm( ( AForm &)*this ) && this->getSignGrade() <= 145 && this->getExecGrade() <= 137 ) {
		
		std::ofstream outFile( this->target + "_shrubbery" );
		if ( !outFile ) {
			
			std::cout << "error: open: cannot open this outfile." << std::endl;
			return 0;
		}

		outFile << "                                                         .\n\
                                              .         ;\n\
                 .              .              ;%     ;;\n\
                   ,           ,                :;%  %;\n\
                    :         ;                   :;%;'     .,\n\
           ,.        %;     %;            ;        %;'    ,;\n\
             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n\
              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n\
               ;%;      %;        ;%;        % ;%;  ,%;'\n\
                `%;.     ;%;     %;'         `;%%;.%;'\n\
                 `:;%.    ;%%. %@;        %; ;@%;%'\n\
                    `:%;.  :;bd%;          %;@%;'\n\
                      `@%:.  :;%.         ;@@%;'\n\
                        `@%.  `;@%.      ;@@%; \n\
                          `@%%. `@%%    ;@@%;\n\
                            ;@%. :@%%  %@@%;\n\
                              %@bd%%%bd%%:;\n\
                                #@%%%%%:;;\n\
                                %@@%%%::;\n\
                                %@@@%(o);  . '\n\
                                %@@@o%;:(.,'\n\
                            `.. %@@@o%::;\n\
                               `)@@@o%::;\n\
                                %@@(o)::;\n\
                               .%@@@@%::;\n\
                               ;%@@@@%::;.\n\
                              ;%@@@@%%:;;;. \n\
                          ...;%@@@@@%%:;;;;,..";
		return 1;
	} else {
		
		throw Bureaucrat::GradeTooLowException();
		return 0;
	}
}