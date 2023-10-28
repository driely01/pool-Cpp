/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:30:43 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/28 15:37:56 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSIDENTIALPARADONFORM_H
#define PERSIDENTIALPARADONFORM_H

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

	private:
		std::string target;
	
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( const std::string name, const int signGrade, const int execGrade );
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( const PresidentialPardonForm &other );
		~PresidentialPardonForm( void );
		PresidentialPardonForm &operator=( const PresidentialPardonForm &rhs );

		int execute( Bureaucrat const &executor ) const;
};

#endif