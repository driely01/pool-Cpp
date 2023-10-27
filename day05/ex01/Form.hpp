/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:35:13 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/24 15:33:44 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form {

	private:
		const std::string name;
		bool sign;
		const int signGrade;
		const int execGrade;
		
	public:
		Form( void );
		Form( const std::string name, const int signGrade, const int execGrade );
		Form( const Form &other );
		~Form( void );
		Form &operator=( const Form &rhs );
		
		std::string getName( void ) const;
		int getSignGrade( void ) const;
		int getExecGrade( void ) const;
		bool getSign( void ) const;
		void beSigned( Bureaucrat bureau );
		
		class GradeTooHightException : public std::exception {
			
			public:
				const char * what( void ) const throw();
		};
		class GradeTooLowException : public std::exception {

			public:
				const char * what( void ) const throw();
		};
};

std::ostream &operator<<( std::ostream &o, const Form &rhs );

#endif