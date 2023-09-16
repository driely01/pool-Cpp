/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:33:57 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/10 17:43:57 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( int argc, char **argv ) {

	std::string str;
	int			i;

	i = 1;
	if ( argc > 1 ) {

		while ( argv[i] )
			str.append( argv[i++] );
		
		i = -1;
		while ( str[++i] )
			str[i] = toupper( str[i] );
			
		std::cout << str << std::endl;
	} else {

		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return 0;
}