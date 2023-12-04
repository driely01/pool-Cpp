/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:09:43 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/04 16:11:04 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef iter_HPP
#define iter_HPP

#include <iostream>


template<typename T, typename F>
void iter( T *array, size_t length, F func ) {

	for ( size_t i = 0; i < length; i++ ) {

		func( array[i] );
	}
}

template<typename T>
void printElement( T element ) {

	std::cout << element << std::endl;
}

#endif