#include "contact.hpp"

#include <iostream>

using namespace std; /* std:: */

Contact::Contact() {}

Contact::~Contact() {}

int	Contact::fillContact() {
	while (this->firstName.empty()) {
		cout << "Add contact: Name: ";
		getline(std::cin, this->firstName);
		if (cin.eof()) { cin.clear(); return 1; }
		if (this->firstName.length() == 0)
			cout << "Error: Name is required" << endl;
	}

	cout << "Add contact: Last name: ";
	getline(cin, this->lastName);
	if (cin.eof()) { cin.clear(); return 1; }
	
	cout << "Add contact: Nick name: ";
	getline(std::cin, this->nickName);
	if (cin.eof()) { cin.clear(); return 1; }
	
	cout << "Add contact: Phone number: ";
	getline(cin, this->phone);
	if (cin.eof()) { cin.clear(); return 1; }	
	
	cout << "Add contact: Darkest secret: ";
	getline(cin, this->darkestSecret);
	if (cin.eof()) { cin.clear(); return 1; }
	
	cout << endl;
	return 0;
}
