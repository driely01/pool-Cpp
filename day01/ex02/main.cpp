/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:59:17 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/21 16:08:33 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void ) {

	std::string str;
	std::string *stringPTR;
	std::string& stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;

	std::cout << "add of str: " << &str << std::endl;
	std::cout << "add of PTR: " << stringPTR << std::endl;
	std::cout << "add of REF: " << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << "value of str: " << str << std::endl;
	std::cout << "value of PTR: " << *stringPTR << std::endl;
	std::cout << "value of REF: " << stringREF << std::endl;
	return 0;
}