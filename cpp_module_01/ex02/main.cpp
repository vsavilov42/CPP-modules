#include <iostream>
#include <string>

int main() {
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "String address: " << std::endl
		<< "string:    " << &string << std::endl
		<< "stringPTR: " << stringPTR << std::endl
		<< "stringREF: " << &stringREF << std::endl << std::endl;

	std::cout << "String content: " << std::endl
		<< "string:    " << string << std::endl
		<< "stringPTR: " << *stringPTR << std::endl
		<< "stringREF: " << stringREF << std::endl << std::endl;
}
