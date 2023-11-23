/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:00:18 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/23 16:52:58 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm( "Shrubbery Creation Form", 145, 137 ), target( "anonyme" ) { }

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm( "Shrubbery Creation Form", 145, 137 ), target( target ) { }

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

	if ( this->getSign() && executor.getGrade() <= this->getExecGrade() ) {
  
		std::ofstream outFile( this->target + "_shrubbery" );
		if ( !outFile ) {
			std::cout << "error: open: cannot open this outfile." << std::endl;
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
	} else {
		
		throw Bureaucrat::GradeTooLowException();
	}
}