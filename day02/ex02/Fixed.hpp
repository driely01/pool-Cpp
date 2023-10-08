/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:57:32 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/08 17:28:58 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <fstream>
#include <math.h>
#include <iostream>

class Fixed {

	private:
		int fixdPoint;
		static const int store;

	public:
		Fixed( void );
		Fixed( const int value );
		Fixed( const float floating );
		Fixed( const Fixed& other );
		~Fixed( void );
		
		int getRawBits( void ) const;
		int toInt( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		
		void operator=( const Fixed& rhs );
		bool operator<( const Fixed& rhs );
		bool operator>( const Fixed& rhs );
		bool operator>=( const Fixed& rhs );
		bool operator<=( const Fixed& rhs );
		bool operator==( const Fixed& rhs );
		bool operator!=( const Fixed& rhs );

		Fixed operator+( Fixed const & rhs );
		Fixed operator-( Fixed const & rhs );
		Fixed operator*( Fixed const & rhs );
		Fixed operator/( Fixed const & rhs );

		Fixed& operator--( void );
		Fixed operator--( int );
		Fixed& operator++( void );
		Fixed operator++( int );

		static Fixed& min( Fixed& rhs, Fixed& lhs );
		static const Fixed& min( const Fixed& rhs, const Fixed& lhs );

		static Fixed& max( Fixed& rhs, Fixed& lhs );
		static const Fixed& max( const Fixed& rhs, const Fixed& lhs );
		
};

std::ostream& operator<<( std::ostream& o, const Fixed& rhs );

#endif