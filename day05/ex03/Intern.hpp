/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:51:37 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/01 14:25:51 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern {

	public:
		Intern( void );
		Intern( const Intern &other );
		~Intern( void );
		Intern &operator=( const Intern &rhs );

		class NameIsntCorrectException : public std::exception {

			public:
				const char *what( void ) const throw();
		};

		AForm *makeForm( std::string name, std::string target );
};

typedef AForm *( *ptrFn ) ( std::string target );

#endif