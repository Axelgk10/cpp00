/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axgimene <axgimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:35:58 by axgimene          #+#    #+#             */
/*   Updated: 2026/01/20 18:44:19 by axgimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

Contact::Contact() {

}

void Contact::setContactInfo() {
	std::cout << "\n--- Add new contact ---" << std::endl;
	do{
		std::cout << "First name: ";
		std::getline(std::cin, firstName);
		if(firstName.empty()) {
			std::cout << "Error: First name cannot be empty!" << std::endl;
		}
	}while(firstName.empty());
	do{
		std::cout << "Last name: ";
		std::getline(std::cin, lastName);
		if(lastName.empty()){
			std::cout << "Error: Last name cannot be empty!" << std::endl;
		}
	}while(lastName.empty());
	do{
		std::cout << "nickname: ";
		std::getline(std::cin, nickname);
		if(nickname.empty()) {
			std::cout << "Error: nickname cannot be empty!" << std::endl;
		}
	}while(nickname.empty());
	do{
		std::cout << "Phone Number: ";
		std::getline(std::cin, phoneNumber);
		if(phoneNumber.empty()) {
			std::cout << "Error: phone number cannot empty!" << std::endl;
		}
	}while(phoneNumber.empty());
	do{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, darkestSecret);
		if(darkestSecret.empty()) {
			std::cout << "Error: Darkest secret cannot empty!" << std::endl;
		}
	}while(darkestSecret.empty());

	std::cout << "Contact added succefully!" << std::endl;
}

void Contact::displayFullInfo() const {
	std::cout << "\n--- Contact Details ---" << std::endl;
	std::cout << "First name: " << firstName << std::endl;
	std::cout << "Last name: " << lastName << std::endl;
	std::cout << "nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phoneNumber << std::endl;
	std::cout << "Darkest secret: " << darkestSecret << std::endl;
}

std::string Contact::getFirstName() const{
	return (firstName);
}

std::string Contact::getLastName() const {
	return (lastName);
}

std::string Contact::getNickName() const {
	return (nickname);
}