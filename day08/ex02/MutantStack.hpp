/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:07:28 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/10 16:05:38 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MutantStack_HPP
#define MutantStack_HPP

#include <iostream>
#include <deque>
#include <stack>

template<class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
	
	public:
		typedef typename Container::iterator iterator;
		
		MutantStack( void ) { };

		~MutantStack( void ) { };
		
		MutantStack( const MutantStack &other ) {

			*this = other;
		};
		
		MutantStack &operator=( const MutantStack &rhs ) {

			if ( this == &rhs )
				return *this;
			this->c = rhs.c;
			return *this;
		};

		iterator begin( void ) {

			return ( this->c.begin() );
		}

		iterator end( void ) {

			return ( this->c.end() );
		}
		
};

#endif
