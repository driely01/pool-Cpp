/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:35:13 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/23 18:23:07 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form {

	private:
		const std::string name;
		bool sign;
		const int signGrade;
		const int execGrade;
		
	public:
		Form( const std::string name, const int signGrade, const int execGrade );
		Form( const Form &other );
		~Form( void );
		Form &operator=( const Form &rhs );
		
		const std::string getName( void ) const;
		const int getSignGrade( void ) const;
		const int getExecGrade( void ) const;
		bool getSign( void ) const;
		class GradeTooHightException : public std::exception {

			const char * what( void ) const throw();
		};
		class GradeTooLowException : public std::exception {

			const char * what( void ) const throw();
		};
};

#endif