/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:10:06 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/19 13:00:34 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {

	public:
		int setContact();
		void getContactIndex() const;
		void getContacts() const;
		PhoneBook();
	
	private:
		Contact contact[8];
		int		index;
};


#endif