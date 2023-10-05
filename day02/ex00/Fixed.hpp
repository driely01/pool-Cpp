/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:42:39 by del-yaag          #+#    #+#             */
/*   Updated: 2023/10/05 17:51:07 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

class Fixed {
	
	private:
		int fixedPoint;
		static const int store;
	
	public:
		Fixed( void );
		Fixed( const Fixed& other );
		~Fixed( void );
		Fixed& operator=( const Fixed& rhs );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif