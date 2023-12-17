/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:31:55 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/17 13:26:27 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// ------------------START JACOBSTHAL NUMBERS------------------ //
int jacobsthal( int n ) {

	if ( n == 0 )
		return 0;
	else if ( n == 1 )
		return 1;
	else {
		
		return jacobsthal( n - 1 ) + 2 * jacobsthal( n - 2 );
	}
}
// -------------------END JACOBSTHAL NUMBERS------------------- //


//-----------------------     VECTOR     ---------------------- //
// ----------------------START FILL VECTOR--------------------- //
bool fillVector( std::vector<int> &container, std::string args ) {

	int number;

	std::istringstream iss( args );
		
	if ( !( iss >> number ) || iss.peek() != EOF )
		return false;

	container.push_back( number );
	return true;
}
// -----------------------END FILL VECTOR---------------------- //

// ----------------------START MERGE SORT---------------------- //
static void merge( std::vector<std::pair<int, int> > left, std::vector<std::pair<int, int> > right, std::vector<std::pair<int, int> > &arr ) {

	arr.clear();
	std::vector<std::pair<int, int> >::iterator itLeft = left.begin();
	std::vector<std::pair<int, int> >::iterator itRight = right.begin();
	
	while ( itLeft < left.begin() + left.size() && itRight < right.begin() + right.size() ) {

		
		if ( itLeft->first < itRight->first ) {
			
			arr.push_back( std::make_pair( itLeft->first, itLeft->second ) );
			++itLeft;
		}
		else {
			
			arr.push_back( std::make_pair( itRight->first, itRight->second ) );
			++itRight;
		}
	}
	while ( itLeft < left.begin() + left.size() ) {
		
		arr.push_back( std::make_pair( itLeft->first, itLeft->second ) );
		++itLeft;
	}
	while ( itRight < right.begin() + right.size() ) {

		arr.push_back( std::make_pair( itRight->first, itRight->second ) );
		++itRight;
	}
}

void mergeSort( std::vector<std::pair<int, int> > &arr ) {

	size_t length = arr.size();
	if ( length <= 1 )
		return;
	
	std::vector<std::pair<int, int> > right;
	std::vector<std::pair<int, int> > left;
	std::vector<std::pair<int, int> >::iterator it = arr.begin();

	for ( ; it < arr.begin() + arr.size(); ++it ) {

		if ( it < arr.begin() + arr.size() / 2 ) {
			
			left.push_back( std::make_pair( it->first, it->second ) );
		} else {

			right.push_back( std::make_pair( it->first, it->second ) );
		}
	}
	
	mergeSort( left );
	mergeSort( right );
	merge( left, right, arr );
}
// -----------------------END MERGE SORT----------------------- //

// ---------------------START PRINT VECTOR--------------------- //
void printVector( std::vector<int> &vec, bool before ) {

	size_t length = vec.size();
	std::vector<int>::iterator it = vec.begin();
	if ( before )
		std::cout << "Before:\t";
	else
		std::cout << "After:\t";

	if ( length > 10 )
		length = 10;
	for ( ; it < vec.begin() + length; ++it )
		std::cout << *it << " ";
	std::cout << "[...]" << std::endl;
}
// ----------------------END PRINT VECTOR---------------------- //

// ----------------------START ALGORITHM----------------------- //
void executeAlgo( std::vector<int> &container ) {

	// iterators
	std::vector<std::pair<int, int> > newContainer;
	std::vector<std::pair<int, int> >::iterator itt;
	std::vector<int>::iterator it;

	// our tmp
	size_t length = container.size();

	// jacob vars
	size_t prevJacobN = 2;
	size_t jacobN = 0;
	size_t nextJacobN;
	int tmpUnpair = 0;

	std::clock_t start = std::clock();

	// if the size is odd add the last one in a tmp and pop it from the end of the container
	if ( length % 2 ) {

		tmpUnpair = *( container.rbegin() );
		container.pop_back();
	}
	
	// copy all the content of the first container into a pair container
	it = container.begin();;
	for ( ; it != container.end(); it += 2 ) {

		newContainer.push_back( std::make_pair( *it, *( it + 1 ) ) );
	}

	// swap the pairs it the first one is less than the second one
	itt = newContainer.begin();
	for ( ; itt != newContainer.end(); ++itt ) {

		if ( itt->first < itt->second )
			std::swap( itt->first, itt->second );
	}

	// here we will sort all first pairs with merge sort
	mergeSort( newContainer );
	
	// clear the original container to reuse it
	container.clear();

	// push second pair of the begenning of the new container in the original container
	itt = newContainer.begin();
	container.push_back( itt->second );

	// push all the first pairs in the newContainer in the original container
	for ( ; itt != newContainer.end(); ++itt ) {

		container.push_back( itt->first );
	}

	// now sort the elements using binary search and jacobsthal number method
	for ( size_t i = 3; i < newContainer.size(); i++ ) {
		
		prevJacobN = jacobN;
		if ( jacobN < newContainer.size() )
			jacobN = jacobsthal( i );
		nextJacobN = jacobN;
		while ( jacobN > prevJacobN ) {

			if ( jacobN < newContainer.size() ) {
				
				it = std::lower_bound( container.begin(), container.end(), newContainer[jacobN].second );
				container.insert( it, newContainer[jacobN].second );
			}
			jacobN--;
		}
		jacobN = nextJacobN;
	}

	// if the size is odd add the tmp to the original container
	if ( length % 2 ) {

		it = std::lower_bound( container.begin(), container.end(), tmpUnpair );
		container.insert( it, tmpUnpair );
	}

	std::clock_t end = std::clock();
	double getTimeOfExec = static_cast<double>( end - start ) / CLOCKS_PER_SEC;
	printVector( container, 0 );
	std::cout << "Time to process a range " << container.size() << " elements with std::[...] : " << ( getTimeOfExec * 1000 ) << " ms" << std::endl;
}
// -----------------------END ALGORITHM------------------------ //
//-----------------------     VECTOR     ---------------------- //

//-----------------------      DEQUE     ---------------------- //
bool fillDeque( std::deque<int> &container, std::string args ) {

	int number;

	std::istringstream iss( args );
		
	if ( !( iss >> number ) || iss.peek() != EOF )
		return false;

	container.push_back( number );
	return true;
}

// ----------------------START MERGE SORT---------------------- //
static void mergeDeque( std::deque<std::pair<int, int> > left, std::deque<std::pair<int, int> > right, std::deque<std::pair<int, int> > &arr ) {

	arr.clear();
	std::deque<std::pair<int, int> >::iterator itLeft = left.begin();
	std::deque<std::pair<int, int> >::iterator itRight = right.begin();
	
	while ( itLeft < left.begin() + left.size() && itRight < right.begin() + right.size() ) {

		
		if ( itLeft->first < itRight->first ) {
			
			arr.push_back( std::make_pair( itLeft->first, itLeft->second ) );
			++itLeft;
		}
		else {
			
			arr.push_back( std::make_pair( itRight->first, itRight->second ) );
			++itRight;
		}
	}
	while ( itLeft < left.begin() + left.size() ) {
		
		arr.push_back( std::make_pair( itLeft->first, itLeft->second ) );
		++itLeft;
	}
	while ( itRight < right.begin() + right.size() ) {

		arr.push_back( std::make_pair( itRight->first, itRight->second ) );
		++itRight;
	}
}

void mergeSortDeque( std::deque<std::pair<int, int> > &arr ) {

	size_t length = arr.size();
	if ( length <= 1 )
		return;
	
	std::deque<std::pair<int, int> > right;
	std::deque<std::pair<int, int> > left;
	std::deque<std::pair<int, int> >::iterator it = arr.begin();

	for ( ; it < arr.begin() + arr.size(); ++it ) {

		if ( it < arr.begin() + arr.size() / 2 ) {
			
			left.push_back( std::make_pair( it->first, it->second ) );
		} else {

			right.push_back( std::make_pair( it->first, it->second ) );
		}
	}
	
	mergeSortDeque( left );
	mergeSortDeque( right );
	mergeDeque( left, right, arr );
}
// -----------------------END MERGE SORT----------------------- //

// ---------------------START PRINT DEQUE---------------------- //
void printDeque( std::deque<int> &vec, bool before ) {

	std::deque<int>::iterator it = vec.begin();
	if ( before )
		std::cout << "Before:\t";
	else
		std::cout << "After:\t";

	for ( ; it < vec.begin() + 10; ++it )
		std::cout << *it << " ";
	std::cout << "[...]" << std::endl;
}
// ----------------------END PRINT DEQUE----------------------- //

// ----------------------START ALGORITHM----------------------- //
void executeAlgoDeque( std::deque<int> &container ) {

	std::deque<std::pair<int, int> > newContainer;
	std::deque<std::pair<int, int> >::iterator itt;
	std::deque<int>::iterator it;
	size_t length = container.size();
	size_t prevJacobN = 2;
	size_t jacobN = 0;
	size_t nextJacobN;
	int tmpUnpair = 0;

	std::clock_t start = std::clock();

	if ( length % 2 ) {

		tmpUnpair = *( container.rbegin() );
		container.pop_back();
	}
	
	it = container.begin();;
	for ( ; it != container.end(); it += 2 ) {

		newContainer.push_back( std::make_pair( *it, *( it + 1 ) ) );
	}

	itt = newContainer.begin();
	for ( ; itt != newContainer.end(); ++itt ) {

		if ( itt->first < itt->second )
			std::swap( itt->first, itt->second );
	}

	mergeSortDeque( newContainer );
	
	container.clear();

	itt = newContainer.begin();
	container.push_back( itt->second );

	for ( ; itt != newContainer.end(); ++itt ) {

		container.push_back( itt->first );
	}

	for ( size_t i = 3; i < newContainer.size(); i++ ) {
		
		prevJacobN = jacobN;
		if ( jacobN < newContainer.size() )
			jacobN = jacobsthal( i );
		nextJacobN = jacobN;
		while ( jacobN > prevJacobN ) {

			if ( jacobN < newContainer.size() ) {
				
				it = std::lower_bound( container.begin(), container.end(), newContainer[jacobN].second );
				container.insert( it, newContainer[jacobN].second );
			}
			jacobN--;
		}
		jacobN = nextJacobN;
	}

	if ( length % 2 ) {

		it = std::lower_bound( container.begin(), container.end(), tmpUnpair );
		container.insert( it, tmpUnpair );
	}

	std::clock_t end = std::clock();
	double getTimeOfExec = static_cast<double>( end - start ) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range " << container.size() << " elements with std::[...] : " << ( getTimeOfExec * 1000 ) << " ms" << std::endl;
}
// -----------------------END ALGORITHM------------------------ //
//-----------------------      DEQUE     ---------------------- //


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