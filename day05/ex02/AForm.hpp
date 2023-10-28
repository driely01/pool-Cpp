/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:35:13 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/28 15:37:28 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class AForm {

	private:
		const std::string name;
		bool sign;
		const int signGrade;
		const int execGrade;
		
	public:
		AForm( void );
		AForm( const std::string name, const int signGrade, const int execGrade );
		AForm( const AForm &other );
		~AForm( void );
		AForm &operator=( const AForm &rhs );
		
		std::string getName( void ) const;
		int getSignGrade( void ) const;
		int getExecGrade( void ) const;
		bool getSign( void ) const;
		void beSigned( Bureaucrat bureau );
		int virtual execute( Bureaucrat const &executor ) const = 0;
		
		class GradeTooHightException : public std::exception {
			
			public:
				const char * what( void ) const throw();
		};
		class GradeTooLowException : public std::exception {

			public:
				const char * what( void ) const throw();
		};
};

std::ostream &operator<<( std::ostream &o, const AForm &rhs );

#endif