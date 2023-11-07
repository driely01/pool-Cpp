/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:40:10 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/07 13:55:32 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Base_HPP
#define Base_HPP

#include <iostream>
#include <time.h>

class Base {
	
	public:
		virtual ~Base( void );
};

Base *generate( void );
void identify( Base *p );
void identify( Base &p );

#endif
