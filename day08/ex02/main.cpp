/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:07:22 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/12 15:55:47 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <vector>

int main( void ) {

	{
		std::cout << "test with default container deque: " << std::endl;
		MutantStack<int> mstack;
		MutantStack<int> copy;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.top() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		// test itertator of mutanststack
		std::cout << "mstack:	";
		while( it != ite ) {

			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;

		// test copy constructor of stack class
		std::stack<int> s(mstack);
		std::cout << "s:	";
		while( !s.empty() ) {

			std::cout << s.top() << " ";
			s.pop();
		}
		std::cout << std::endl;

		copy = mstack;
		MutantStack<int>::iterator itt = copy.begin();
		MutantStack<int>::iterator itte = copy.end();

		// test copy assignment operator
		std::cout << "copy:	";
		while ( itt != itte ) {

			std::cout << *itt << " ";
			itt++;
		}
		std::cout << std::endl << std::endl;
	}
	
	// -------------------------------------------------------------------------------------
	{
		std::cout << "test with list container: " << std::endl;
		MutantStack<int, std::list<int> > mstack;
		MutantStack<int, std::list<int> > copy;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.top() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int, std::list<int> >::iterator it = mstack.begin();
		MutantStack<int, std::list<int> >::iterator ite = mstack.end();

		++it;
		--it;
		// test itertator of mutanststack
		std::cout << "mstack:	";
		while( it != ite ) {

			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;

		// test copy constructor of stack class
		std::stack<int, std::list<int> > s(mstack);
		std::cout << "s:	";
		while( !s.empty() ) {

			std::cout << s.top() << " ";
			s.pop();
		}
		std::cout << std::endl;

		copy = mstack;
		MutantStack<int, std::list<int> >::iterator itt = copy.begin();
		MutantStack<int, std::list<int> >::iterator itte = copy.end();

		// test copy assignment operator
		std::cout << "copy:	";
		while ( itt != itte ) {

			std::cout << *itt << " ";
			itt++;
		}
		std::cout << std::endl << std::endl;
	}
	
	// -----------------------------------------------------------------------
	{
		std::cout << "test with vector container: " << std::endl;
		MutantStack<int, std::vector<int> > mstack;
		MutantStack<int, std::vector<int> > copy;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.top() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int, std::vector<int> >::iterator it = mstack.begin();
		MutantStack<int, std::vector<int> >::iterator ite = mstack.end();

		++it;
		--it;
		// test itertator of mutanststack
		std::cout << "mstack:	";
		while( it != ite ) {

			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;

		// test copy constructor of stack class
		std::stack<int, std::vector<int> > s(mstack);
		std::cout << "s:	";
		while( !s.empty() ) {

			std::cout << s.top() << " ";
			s.pop();
		}
		std::cout << std::endl;

		copy = mstack;
		MutantStack<int, std::vector<int> >::iterator itt = copy.begin();
		MutantStack<int, std::vector<int> >::iterator itte = copy.end();

		// test copy assignment operator
		std::cout << "copy:	";
		while ( itt != itte ) {

			std::cout << *itt << " ";
			itt++;
		}
		std::cout << std::endl;
	}
	// -----------------------------------------------------------------------
	return 0;
}