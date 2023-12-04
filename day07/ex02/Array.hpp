/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:15:18 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/04 16:43:57 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_HPP
#define Array_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array {

	private:
		T *array;
		unsigned int arraySize;

	public:
		Array( void ) {
			
			this->arraySize = 0;
			this->array = new T[0];
		}

		Array( unsigned int n ) : arraySize( n ) {

			this->array = new T[arraySize];
			for ( unsigned int i = 0; i < arraySize; i++ )
				this->array[i] = T();
		}
		
		Array( const Array &other ) {

			this->array = new T[this->arraySize];
			this->arraySize = other.arraySize;
			
			for ( unsigned int i = 0; i < arraySize; i++ )
				this->array[i] = other.array[i];
			*this = other;
		}
		
		Array<T> &operator=( const Array<T> &rhs ) {

			if ( this == &rhs )
				return *this;
				
			delete[] this->array;
			this->arraySize = rhs.arraySize;
			this->array = new T[arraySize];
			
			for ( unsigned int i = 0; i < arraySize; i++ )
				this->array[i] = rhs.array[i];
			return *this;
		}
		
		T& operator[]( unsigned int index ) {

			if ( index >= this->arraySize ) {

				throw std::out_of_range("this index is out of bounds");
			}
			return this->array[index];
		}
		
		unsigned int size( void ) const { return arraySize; }
		
		~Array( void ) { delete[] this->array; }
};


#endif
