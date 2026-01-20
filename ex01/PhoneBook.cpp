/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axgimene <axgimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:36:23 by axgimene          #+#    #+#             */
/*   Updated: 2026/01/20 18:44:51 by axgimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cstdlib>

PhoneBook::PhoneBook() : contactCount(0), oldestIndex(0) {
	
}

std::string PhoneBook::truncatText(std::string text) const {
	if(text.length() > 10) {
		return (text.substr(0, 9) + ".");
	}
	return (text);
}

void PhoneBook::displayContactSummary(int index) const{
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << truncatText(contacts[index].getFirstName()) << "|";
	std::cout << std::setw(10) << truncatText(contacts[index].getLastName()) << "|";
	std::cout << std::setw(10) << truncatText(contacts[index].getNickName()) << "|" << std::endl;
}

void PhoneBook::addContact() {
	if(contactCount < 8) {
		contacts[contactCount].setContactInfo();
		contactCount++;
	}else {
		contacts[oldestIndex].setContactInfo();
		oldestIndex = (oldestIndex + 1) % 8;
	}
}

void PhoneBook::searchContacts() const {
	if(contactCount == 0) {
		std::cout << "\nPhonebook is empty!" << std::endl;
		return ;
	}
	std::cout << "\n	Index|First Name| Last Name| Nickname|" << std::endl;
	std::cout << "----------|----------|----------|----------|" << std::endl;

	for(int i = 0; i < contactCount; i++) {
		displayContactSummary(i);
	}
	std::cout << "\nEnter contact index...: ";
	std::string input;
	std::getline(std::cin, input);

	bool isValid = true;
	for(size_t j = 0; j < input.length(); j++) {
		if(!isdigit(input[j])) {
			isValid = false;
			break;
		}
	}
	if(!isValid) {
		std::cout << "Invalid index!" << std::endl;
		return;
	}
	int index = std::atoi(input.c_str());
	if(index >= 0 && index < contactCount) {
		contacts[index].displayFullInfo();
	} else {
		std::cout << "Ivalid out of range" << std::endl;
	}
}