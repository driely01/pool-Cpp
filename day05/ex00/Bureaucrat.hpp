/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:39:32 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/22 17:41:55 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HP
#define BUREAUCRAT_HP

#include <iostream>

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
};

std::ostream &operator<<( std::ostream &o, const Bureaucrat &rhs );

#endif