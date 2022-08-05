#include "PhoneBook.hpp"
#include <sstream> /* istringstream() */

PhoneBook::PhoneBook() {
	this->idContact = 0;
	this->currentContact = 0;
	for (int i = 0; i < MAX_CONTACTS; i++)
		this->contact[i] = new Contact;
}

PhoneBook::~PhoneBook() {
	for (int i = 0; i < MAX_CONTACTS; i++)
		delete this->contact[i];
}

void	PhoneBook::addContact() {
	if (this->idContact >= this->MAX_CONTACTS)
		this->idContact = 0;
	std::cout << std::endl;

	Contact *tmp = new Contact;
	if (tmp->fillContact(idContact)) {
		delete tmp;
	} else {
		delete this->contact[this->idContact];
		this->contact[this->idContact] = tmp;
		std::cout << "Contact added successfully" << std::endl;
		this->idContact++;
		if (this->currentContact < this->MAX_CONTACTS)
			this->currentContact++;
	}
	std::cout << std::endl;
}

void	PhoneBook::searchContact() {
	if (this->currentContact == 0) {
		std::cout << "Error: No contacts in PhoneBook" << std::endl;
		return ;
	}
	std::cout << std::endl
	<< "|-------------------------------------------|\n"
	<< "|     Index|First Name| Last Name|  Nickname|\n"
	<< "|-------------------------------------------|\n";
	for (int i = 0; i < this->currentContact; i++) {
		this->contact[i]->showTable();
		std::cout << "|-------------------------------------------|" << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Enter index of a contact for extended information or type EXIT to return" << std::endl;
	bool valid = true;
	int IndexTmp = 0;
	std::string str;

	while (valid) {
		std::cout << "Index: ";
		std::getline(std::cin, str);
		std::istringstream(str) >> IndexTmp;
		if (str == "EXIT")
			break ;
		else if (str.length() > 1) {
			std::cout << "Error: Invalid Index" << std::endl;
		}
		else if (IndexTmp > 0 && IndexTmp <= this->currentContact) {
			this->contact[IndexTmp - 1]->showInfo();
			break ;
		}
		else
			std::cout << "Error: Invalid Index" << std::endl;

	}
	std::cout << std::endl;
}
