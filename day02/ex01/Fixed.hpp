/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:07:43 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/14 15:33:56 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <fstream>

class Fixed {
	
	private:
		int fixedPoint;
		static const int store;
	
	public:
		Fixed( const int value );
		Fixed( const float floating );
		Fixed( void );
		Fixed( const Fixed& other );
		~Fixed( void );
		void operator=( const Fixed& rhs );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		
};

std::ostream& operator<<( std::ostream & o, const Fixed& rhs );

#endif