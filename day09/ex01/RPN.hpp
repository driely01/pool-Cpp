/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 20:44:19 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/14 21:32:20 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <sstream>

class Tree {
	
	private:
		class Tree *left_child;
		class Tree *right_child;
		char *oprt;
		
	public:
		Tree( void );
		~Tree( void );
		Tree( const Tree &other );
		Tree &operator=( const Tree &rhs );
};

bool parseArguments( std::string arg );

#endif
