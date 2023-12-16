/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:31:55 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/16 18:23:55 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void executeAlgo( std::vector<int> &container ) {

	std::vector<std::pair<int, int> > newContainer;
	size_t length = container.size();
	int tmpUnpair;

	// if the size is odd add the last one in a tmp and pop it from the end of the container
	if ( length % 2 ) {

		tmpUnpair = *( container.rbegin() );
		container.pop_back();
	}
	
	// copy all the content of the first container into a pair container
	std::vector<int>::iterator it = container.begin();
	for ( ; it != container.end(); it += 2 ) {

		newContainer.push_back( std::make_pair( *it, *( it + 1 ) ) );
	}

	// swap the pairs it the first one is less than the second one
	std::vector<std::pair<int, int> >::iterator itt = newContainer.begin();
	for ( ; itt != newContainer.end(); ++itt ) {

		if ( itt->first < itt->second )
			std::swap( itt->first, itt->second );
		std::cout << itt->first << " " << itt->second << std::endl;
	}
	std::cout << tmpUnpair << std::endl;

	// here insert all the first pair into a multiset to sort them recursively
	std::multiset<int> tmpSet;
	itt = newContainer.begin();
	while ( itt != newContainer.end() ) {
		
		tmpSet.insert( itt->first );
		++itt;
	}

	// here display the result in the multiset container
	std::multiset<int>::iterator s = tmpSet.begin();
	for ( ; s != tmpSet.end(); ++s ) {

		std::cout << "multi set " << *s << std::endl;
	}

	// now we need to implement the insertion sort with the jacobsthal numbers
	// we need to clear the original container to reuse it now
	itt = newContainer.begin();
	container.clear();
	container.push_back( itt->second );
	s = tmpSet.begin();
	for ( ; s != tmpSet.end(); ++s ) {

		container.push_back( *s );
	}
	it = container.begin();
	for ( ; it != container.end(); ++it ) {
		
		std::cout << *it << " ";
	}
	
}

void fillVector( std::vector<int> &container, std::string args ) {

	int number;

	std::istringstream( args ) >> number;
	
	container.push_back( number );
}

bool parseArguments( std::string args ) {

	for ( int i = 0; args[i]; i++ ) {

		if ( !isdigit( args[i] ) && args[i] != '+') {

			std::cout << "Error: not a valid numbers." << std::endl;
			return false;
			
		}
		else if ( args[i] == '+' && i ) {
			
			std::cout << "Error: not a valid numbers." << std::endl;
			return false;
			
		}
	}
	return true;
}