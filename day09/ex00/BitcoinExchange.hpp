#ifndef BitcoinExchange_HPP
#define BitcoinExchange_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <limits>
#include <map>


bool parseInputAndExecute( char *filename );
bool readDataFillMap( std::map<std::string, double> &data, std::string filename );

#endif
