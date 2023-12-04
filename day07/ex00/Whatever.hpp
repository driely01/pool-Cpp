/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:43:39 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/04 15:54:30 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Whatever_HPP
#define Whatever_HPP

#include <iostream>

template<typename T>
void swap( T &first, T &second ) {

	T tmp;

	tmp = first;
	first = second;
	second = tmp;
}

template<typename T>
T min( T &first, T &second ) {

	if ( first < second )
		return first;
	else
		return second;
}

template<typename T>
T max( T &first, T &second ) {

	if ( first > second )
		return first;
	else
		return second;
}

#endif
