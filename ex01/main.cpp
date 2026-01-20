/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axgimene <axgimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:36:36 by axgimene          #+#    #+#             */
/*   Updated: 2026/01/20 18:42:16 by axgimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main() {
	PhoneBook phonebook;
	std::string command;

	std::cout << "=== MY AWESOME PHONEBOOK ===" << std::endl;
	std::cout << "Avaible commands: ADD, SEARCH, EXIT" << std::endl;
	while(true) {
		std::cout << "\nEnter command: ";
		std::getline(std::cin, command);

		if(command == "ADD") {
			phonebook.addContact();
		} else if (command == "SEARCH") {
		phonebook.searchContacts();
		} else if (command == "EXIT") {
			std::cout << "Goodbye! Contacts will be lost forever!" << std::endl;
			break;
		} else {
			std::cout << "Invalid command! Use ADD, SEARCH, EXIT." << std::endl;
		}
	}
	return (0);
}