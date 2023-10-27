/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:30:43 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/27 18:08:19 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSIDENTIALPARADONFORM_H
#define PERSIDENTIALPARADONFORM_H

#include "AForm.hpp"

class PresidentialPardonForm : public Form {

	private:
		std::string target;
	
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( const PresidentialPardonForm &other );
		~PresidentialPardonForm( void );
		PresidentialPardonForm &operator=( const PresidentialPardonForm &rhs );

		void execute( Bureaucrat const &executor ) const;
};

#endif