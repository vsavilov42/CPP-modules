#include "contact.hpp"

#include <iostream>
#include <iomanip> /* setw() */

Contact::Contact() { index = 0; }

Contact::~Contact() {}

int	Contact::fillContact(int index) {

	this->index = index + 1;
	while (this->firstName.empty()) {
		std::cout << "Add contact: Name: ";
		std::getline(std::cin, this->firstName);
		if (std::cin.eof()) { std::cin.clear(); return 1; }
		if (this->firstName.length() == 0)
			std::cout << "Error: Name is required" << std::endl;
	}

	std::cout << "Add contact: Last name: ";
	std::getline(std::cin, this->lastName);
	if (std::cin.eof()) { std::cin.clear(); return 1; }
	
	std::cout << "Add contact: Nick name: ";
	std::getline(std::cin, this->nickName);
	if (std::cin.eof()) { std::cin.clear(); return 1; }
	
	std::cout << "Add contact: Phone number: ";
	std::getline(std::cin, this->phone);
	if (std::cin.eof()) { std::cin.clear(); return 1; }
	
	std::cout << "Add contact: Darkest secret: ";
	std::getline(std::cin, this->darkestSecret);
	if (std::cin.eof()) { std::cin.clear(); return 1; }
	
	std::cout << std::endl;
	return 0;
}

void	Contact::showTable() {
	std::cout << "|" << std::right << std::setw(10) << this->index << "|";
	
	if (this->firstName.length() > 10)
		std::cout << this->firstName.substr(0, 9) << ".";
	else
		std::cout << std::right << std::setw(10) << this->firstName;
	std::cout << "|";
	
	if (this->lastName.length() > 10)
		std::cout << this->lastName.substr(0, 9) << ".";
	else
		std::cout << std::right << std::setw(10) << this->lastName;
	std::cout << "|";
	
	if (this->nickName.length() > 10)
		std::cout << this->nickName.substr(0, 9) << ".";
	else
		std::cout << std::right << std::setw(10) << this->nickName;
	std::cout << "|";
	std::cout << std::endl;
}

void	Contact::showInfo() {

	std::cout << std::endl << "Pbook extended information:" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	std::cout << "&> First Name: " << this->firstName << std::endl;
	std::cout << "&> Last Name: " << this->lastName << std::endl;
	std::cout << "&> Nick Name: " << this->nickName << std::endl;
	std::cout << "&> Phone: " << this->phone << std::endl;
	std::cout << "&> Darkest Secret: " << this->darkestSecret << std::endl;
	std::cout << std::endl;
}
