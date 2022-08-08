#include <iostream>
#include <fstream>
#include "sed.hpp"

Sed::Sed( std::string const filename, std::string s1, std::string s2 ):_filename(filename),_s1(s1),_s2(s2) {}

Sed::~Sed() {}

std::string	Sed::sedReplace( void ) {
	return "paco";
}

bool	Sed::manageFile( std::string const file, std::string s1, std::string s2 ) {
	if (file.empty() || s1.empty() || s2.empty()) {
		std::cout << EMPTYFILE << std::endl;
		return false;
	}

	std::ifstream	input;
	std::ofstream	output;

	input.open(file, std::fstream::out);
	if (!input.is_open()) {
		std::cout << OPENERROR << this->_filename << std::endl;
		return false;
	}
	return true;
}
