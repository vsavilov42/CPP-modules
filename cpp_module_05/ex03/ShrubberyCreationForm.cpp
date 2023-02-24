#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include <fstream> /* std::ofstream file, c.str(), in/out/trunc */

ShrubberyCreationForm::ShrubberyCreationForm( void ):Form("Shrubbery creation", "none", 145, 137) { }

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& form )
	:Form("Shrubbery creation", form, 145, 137) {
	std::cout << "Shrubbery creation form created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& copy )
	:Form(copy.getName(), copy.getTarget(), copy.getSignGrade(), copy.getExecGrade()) {
	std::cout << "Copy Shrubbery creation form called" << std::endl;
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	std::cout << "Shrubbery creation form destructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& lhs ) {
	std::cout << "Shrubbery creation form operator = called" << std::endl;
	(void)lhs;
	return *this;
}

void ShrubberyCreationForm::execForm( void ) const {
	std::ofstream file;

	file.open((this->getTarget() + "_shrubbery").c_str(), std::ofstream::in | std::ofstream::trunc);
	file << std::endl;
	file << "           \\/ |    |/" << std::endl;
	file << "        \\/ / \\||/  /_/___/_" << std::endl;
	file << "         \\/   |/ \\/" << std::endl;
	file << "    _\\__\\_\\   |  /_____/_" << std::endl;
	file << "           \\  | /          /" << std::endl;
	file << "  __ _-----`  |{,-----------~" << std::endl;
	file << "            \\ }{" << std::endl;
	file << "             }{{" << std::endl;
	file << "             }}{" << std::endl;
	file << "             {{}" << std::endl;
	file << "       , -=-~{ .-^- _" << std::endl;
	file << "             `}" << std::endl;
}
