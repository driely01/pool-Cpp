/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:39:32 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/23 17:12:06 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HP
#define BUREAUCRAT_HP

#include <iostream>
#include <exception>

class Bureaucrat {

	private:
		const std::string name;
		int grade;
		
	public:
		Bureaucrat( std::string name, int grade );
		Bureaucrat( const Bureaucrat &other );
		~Bureaucrat( void );
		
		Bureaucrat &operator=( const Bureaucrat &rhs );

		std::string getName( void ) const;
		int getGrade( void ) const;
		void incrementGrade( void );
		void decrementGrade( void );
		class GradeTooHightException : public std::exception {
			
			public:
				const char * what( void ) const throw();
		};
		class GradeTooLowException : public std::exception {

			public:
				const char * what( void ) const throw();
		};
};

std::ostream &operator<<( std::ostream &o, const Bureaucrat &rhs );

#endif