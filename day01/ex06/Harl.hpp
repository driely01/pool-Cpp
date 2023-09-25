/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:42:01 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/25 12:01:40 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>


class Harl {

	public:
		void complain( std::string level );
		
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};


typedef void ( Harl::*pointerToMemberFn ) ( void );

#endif