/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:04:29 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/23 18:33:37 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_H
#define SED_H

#include <iostream>
#include <string>
#include <fstream>

int replacingFile( std::string filename, std::string s1, std::string s2 );

#endif