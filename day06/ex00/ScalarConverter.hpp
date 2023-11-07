/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:51:08 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/06 13:53:08 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverter_HPP
#define ScalarConverter_HPP

#include <iostream>
#include <iostream>
#include <string>
#include <sstream>

class ScalarConverter {

	private:
		ScalarConverter( void );
		ScalarConverter( const ScalarConverter &other );
		~ScalarConverter( void );
		ScalarConverter &operator=( const ScalarConverter &rhs );

	public:
		static void convert( std::string converter );
};

#endif