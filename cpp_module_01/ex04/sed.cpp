#include <iostream>
#include <fstream>
#include "sed.hpp"

Sed::Sed( std::string const filename, std::string const &s1, std::string const &s2 ):_filename(filename),_s1(s1),_s2(s2) {}

Sed::~Sed() { std::cout << this->_s1 << this->_s2;}

std::string	Sed::_sedReplace( void ) {
	return "paco";
}

bool	Sed::manageFile( std::string const file, std::string const s1, std::string const s2 ) {
	if (file.empty() || s1.empty() || s2.empty()) {
		std::cout << EMPTYFILE << std::endl;
		return false;
	}
	

	std::ifstream	input;
	std::ofstream	output;

	input.open(file, std::fstream::out);
	if (!input.is_open()) {
		std::cout << OPENERROR << file << std::endl;
		return false;
	}
	output.open(file + ".replace", std::fstream::in | std::fstream::trunc);
	if (!output.is_open()) {
		std::cout << OPENERROR << file << std::endl;
		input.close();
		return false;
	}
	Sed *sed = new Sed(file, s1, s2);
	std::string line;
	while (std::getline(input, line, '\n').good()) {
		output << sed->_sedReplace();
		if (!input.eof())
			output << std::endl;
	}	
	input.close();
	output.close();
	return true;
}
