/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axgimene <axgimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:36:26 by axgimene          #+#    #+#             */
/*   Updated: 2026/01/19 13:36:27 by axgimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define  PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
private:
    Contact contacts[8];
    int contactCount;
    int oldestIndex;
    void displayContactSummary(int index) const;
    std::string truncatText(std::string text) const;
public:
    PhoneBook();
    void addContact();
    void searchContacts() const;
};

#endif