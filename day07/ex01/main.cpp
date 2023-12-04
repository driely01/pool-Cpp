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
#include <vector>
#include "iter.hpp"

int main() {
    std::string  arr[] = {"hello", "world", "make", "father", "ping pong"};
    size_t length = sizeof(arr) / sizeof(arr[0]);

    std::cout << "test one" << std::endl;
    std::cout << "Array elements:" << std::endl;
    iter( arr, length, printElement<std::string> );
    std::cout << std::endl << std::endl;
    
    std::cout << "test two" << std::endl;
    int arr1[20];
    length = sizeof( arr1 ) / sizeof( arr1[0] );
    for( size_t i = 0; i < length; i++ )
       arr1[i] = i;
    iter( arr1, length, printElement<int> );
    return 0;
}
