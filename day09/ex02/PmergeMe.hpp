/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:31:58 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/17 12:54:31 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PmergeMe_HPP
#define PmergeMe_HPP

#include <deque>
#include <ctime>
#include <vector>
#include <utility>
#include <sstream>
#include <iostream>
#include <algorithm>

bool parseArguments( std::string args );
int jacobsthal( int n );

//-----------------------     VECTOR     ---------------------- //
void executeAlgo( std::vector<int> &container );
void printVector( std::vector<int> &vec, bool before );
void mergeSort( std::vector<std::pair<int, int> > &arr );
bool fillVector( std::vector<int> &container, std::string args );
//-----------------------     VECTOR     ---------------------- //

//-----------------------      DEQUE     ---------------------- //
void printDeque( std::deque<int> &vec, bool before );
void executeAlgoDeque( std::deque<int> &container );
void mergeSortDeque( std::deque<std::pair<int, int> > &arr );
bool fillDeque( std::deque<int> &container, std::string args );
//-----------------------      DEQUE     ---------------------- //
#endif
