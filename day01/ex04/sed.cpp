/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:04:38 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/29 14:53:57 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include "sed.hpp"

int openFile( std::ifstream& inputFile, std::string filename ) {

	inputFile.open( filename.c_str(), std::ifstream::in );
	if ( !inputFile ) {

		std::cout << "error: open: cannot open this infile." << std::endl;
		return 0;
	}
	return 1;
}

void readingFile( std::ifstream& inputFile, std::string& buff ) {

	std::string str;

	while ( !inputFile.eof() ) {

		if ( !getline( inputFile, str ).eof() ) {
			
			buff.append( str );
			buff.append( "\n" );
		} else {
			
			buff.append( str );
		}
	}
	inputFile.close();
}

void findAndReplace( std::string& result, std::string buff, std::string s1, std::string s2 ) {
	
	size_t find;
	size_t length;
	std::string erased;
	
	find = buff.find( s1 );
	while ( 1 ) {

		length = find + s1.length();
		if ( find == std::string::npos ) {
			
			result.append( buff );
			break;
		}
		if ( !find ) {
			
			buff = buff.substr( length, buff.length() - length );
			result.append( s2 );
		} else {

			erased = buff;
			erased.resize( find );
			result.append( erased );
			result.append( s2 );
			buff = buff.substr( length, buff.length() - length );
		}
		find = buff.find( s1 );
	}
}

int replacingFile( std::string filename, std::string s1, std::string s2 ) {

	std::string buff;
	std::string result;
	std::ifstream inputFile;
	
	if ( !openFile( inputFile, filename ) )
		return 0;
		
	std::ofstream outputFile( filename + ".replace" );
	if ( !outputFile ) {

		std::cout << "error: open: cannot open this outfile." << std::endl;
		inputFile.close();
		return 0;
	}
	
	readingFile( inputFile, buff );
	if ( s1 != s2 && !s1.empty() )
		findAndReplace( result, buff, s1, s2 );
	else
		result = buff;
	outputFile << result;
	outputFile.close();
	return 1;
}