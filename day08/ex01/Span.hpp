/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:19:14 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/12 15:38:27 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_HPP
#define Span_HPP

#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
#include <exception>
#include <limits>

class Span {

	private:
		unsigned int N;
		std::multiset<int> span;

	public:
		Span( unsigned int n );
		~Span( void );
		Span( const Span &other );
		Span &operator=( const Span &rhs );

		int shortestSpan( void );
		int longestSpan( void );
		void addNumber( int number );

		template<typename T>
		void addRange( T first, T last ) {
			
			int dist = std::distance( first, last );
			if ( this->span.size() + dist > N )
				throw Span::FullArrayEx();
			this->span.insert( first, last );
		}

		class FullArrayEx : public std::exception {

			public:
				const char *what( void ) const throw();
		};

		class NoSpanEx : public std::exception {

			public:
				const char *what( void ) const throw();
		};
};

#endif
