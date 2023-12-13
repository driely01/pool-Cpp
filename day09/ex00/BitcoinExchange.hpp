#ifndef BitcoinExchange_HPP
#define BitcoinExchange_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <limits>
#include <map>

// declare our class for storing years, months and days of all betcoins

class BitcoinExchange {

	public:
		BitcoinExchange( void );
		// BitcoinExchange( const BitcoinExchange &other );
		~BitcoinExchange( void );
		// BitcoinExchange &operator=( const BitcoinExchange &rhs );
		// declare map with key is the data time class and key is double
};

// void bitcoin( )

// first we need function to parse input file
bool parseInput( char *filename );

#endif
