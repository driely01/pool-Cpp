/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:06:17 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/07 18:26:50 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main() {
    std::string  arr[] = {"hello", "world", "make", "father", "ping pong"};
    size_t length = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array elements:" << std::endl;
    iter(arr, length, printElement<std::string>);
    std::cout << std::endl;

    return 0;
}
