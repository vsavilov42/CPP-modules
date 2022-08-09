#include <iostream>
#include <fstream>
#include "sed.hpp"

Sed::Sed( std::string const filename, std::string const &s1, std::string const &s2 ):_filename(filename),_s1(s1),_s2(s2) {}

Sed::~Sed() { std::cout << this->_s1 << this->_s2;}

std::string	Sed::_sedReplace( std::string const line ) {
	size_t	start = 0;
	size_t	end = 0;
	std::string	replace;

	while (1) {
		end = line.find(this->_s1, start);
		if (end == std::string::npos)
			break ;
		replace.append(line, start, end - start);
		start = end + this->_s1.size();
		replace.append(this->_s2);
	}
	replace.append(line, start);
	return replace;
}

bool	Sed::manageFile( std::string const file, std::string const s1, std::string const s2 ) {
	if (file.empty() || s1.empty() || s2.empty()) {
		std::cout << EMPTYFILE << std::endl;
		return false;
	}

	//I/O file
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

	//Create object sed
	Sed *sed = new Sed(file, s1, s2);
	
	std::string line;
	while (std::getline(input, line, '\n').good()) {
		output << sed->_sedReplace(line);
		if (!input.eof())
			output << std::endl;
	}

	//close I/O file
	input.close();
	output.close();
	return true;
}
