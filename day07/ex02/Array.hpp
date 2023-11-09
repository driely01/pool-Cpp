/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:15:18 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/09 13:20:25 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_HPP
#define Array_HPP

#include <iostream>

template<typename T>
class Array {

	private:
		T *array;

	public:
		Array( void ) {
			
			this->array = new T[0];
		}
		Array( unsigned int n ) {

			this->array = new T[n];
		}
		Array( const Array &other ) {

			this->array = new T;
			*this = other;
		}
		Array &operator=( const Array &rhs ) {

			if ( this == &rhs )
				return *this;
			
		}
		~Array( void );
};

#endif
