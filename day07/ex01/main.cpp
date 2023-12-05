/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:06:17 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/04 16:20:58 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include "iter.hpp"

int main() {

    std::cout << "test string" << std::endl;
    std::string  arr[] = {"hello", "world", "face", "father", "ping pong"};
    size_t length = sizeof(arr) / sizeof(arr[0]);
    iter( arr, length, printElement<std::string> );
    std::cout << std::endl;
    
    //------------------------------------------
    std::cout << "test int" << std::endl;
    int arr1[20];
    length = sizeof( arr1 ) / sizeof( arr1[0] );
    for( size_t i = 0; i < length; i++ )
       arr1[i] = i;
    iter( arr1, length, printElement<int> );
    std::cout << std::endl;

    //------------------------------------------
    std::cout << "test double" << std::endl;
    double d[20];
    double value = 1;
    length = sizeof( d ) / sizeof( d[0] );
    for ( size_t i = 0; i < length; i++ ) {

        value *= 0.9;
        d[i] = value;
    }
    iter( d, length, printElement<double> );
    std::cout << std::endl;
    return 0;
}
