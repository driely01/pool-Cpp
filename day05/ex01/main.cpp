/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:39:24 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/03 15:51:57 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main( void ) {

	try {
		
		Form form;
		std::cout << form << std::endl;
		Form f( "khalid", 1, 10 );
		Bureaucrat b( "med", 1 );
		Bureaucrat b1( "med", 2 );
		f.beSigned( b );
		b.signForm( f );
		std::cout << f << std::endl;
		// b1.signForm( f );
	} catch ( std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	return 0;
}