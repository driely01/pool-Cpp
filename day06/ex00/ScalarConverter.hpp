/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:51:08 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/04 16:21:54 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverter_HPP
#define ScalarConverter_HPP

#include <iostream>

class ScalarConverter {
	public:
		ScalarConverter( void );
		ScalarConverter( const ScalarConverter &other );
		~ScalarConverter( void );
		ScalarConverter &operator=( const ScalarConverter &rhs );

		static void convert( std::string converter );
};

#endif
