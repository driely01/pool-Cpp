/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:07:43 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/05 18:31:17 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

class Fixed {
	
	private:
		int fixedPoint;
		static const int store;
	
	public:
		Fixed( const int value );
		Fixed( const float foating );
		Fixed( void );
		Fixed( const Fixed& other );
		~Fixed( void );
		Fixed& operator=( const Fixed& rhs );
		Fixed& operator<<( const Fixed& rhs );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void );
		int toInt( void );
		
};
#endif