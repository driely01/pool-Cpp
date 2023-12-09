/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:19:18 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/07 17:06:49 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( unsigned int n ) : N( n ) { }

Span::Span( const Span &other ) {
	
	*this = other;
}

Span &Span::operator=( const Span &rhs ){
	
	if ( this == &rhs )
		return *this;
	this->N = rhs.N;
	this->span = rhs.span;
	return *this;
}

Span::~Span( void ) { }

void Span::addNumber( int number ) {

	if ( this->span.size() >= N )
		throw Span::FullArrayEx();
	
	this->span.insert( number );
}

int Span::shortestSpan( void ) {

	if ( this->span.size() < 2 )
		throw NoSpanEx();
	
	int shortDis = std::numeric_limits<int>::max();
	int distance;

	std::multiset<int>::iterator itr = this->span.begin();
	while ( std::next( itr ) != this->span.end() ) {

		distance = *std::next( itr ) - *itr;
		shortDis = std::min( shortDis, distance);
		++itr;
	}

	return shortDis;
}

int Span::longestSpan( void ) {

	if ( this->span.size() < 2 )
		throw Span::FullArrayEx();
	
	std::pair<std::multiset<int>::iterator, std::multiset<int>::iterator > res = std::minmax_element( this->span.begin(), this->span.end() );
	int longest = *res.second - *res.first;
	return longest;
}

const char *Span::FullArrayEx::what( void ) const throw() {

	return "array is already full!";
}

const char *Span::NoSpanEx::what( void ) const throw() {

	return "no span found or the size is less than 2 elements!";
}