#include "PhoneBook.hpp"

#include <iostream>
#include <string> /* string */
#include <csignal> /* cin::eof() */

int main() {
	std::string	line;
	PhoneBook *phoneBook = new PhoneBook();

	while (std::cout << "Pbook> ", std::getline(std::cin, line)) {
		if (line == "EXIT")
			break ;
		else if (line == "SEARCH")
			phoneBook->searchContact();
		else if (line == "ADD")
			phoneBook->addContact();
		else if (std::cin.eof())
			break ;
		std::cin.clear();
	}
	std::cin.clear();

	delete phoneBook;
	return 0;
}
