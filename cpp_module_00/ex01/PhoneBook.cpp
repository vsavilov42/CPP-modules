#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->idContact = 0;
	this->currentContact = 0;
	for (int i = 0; i < MAX_CONTACTS; i++)
		this->contact[i] = new class Contact;
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
	if (tmp->fillContact()) {
		delete tmp;
	}
}
