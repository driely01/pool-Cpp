#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <string>
#include <exception>

template<typename T>
typename T::iterator easyfind( T &container, int element ) {

	typename T::iterator it;

	it = std::find( container.begin(), container.end(), element );
	if ( it == container.end() )
		throw std::out_of_range( "cant found what are you searching for!" );
	return it;
}


#endif
