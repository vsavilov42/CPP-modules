#include <iostream>
#include "Intern.hpp"

Intern::Intern( void ) {
	std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern( void ) {
	std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern( const Intern& copy ) {
	std::cout << "Intern copy constructor called" << std::endl;
	*this = copy;
}

Intern& Intern::operator=( const Intern& lhs ) {
	std::cout << "Intern operator = called" << std::endl;
	(void)lhs;
	return *this;
}

Form* Intern::makeForm( std::string name, std::string target ) {
	static const int nFunc = 3;

	std::string formNames[nFunc] = {
		"presidential pardon",
		"shrubbery creation",
		"robotomy request"
	};

	f formTypes[nFunc] = {
		&Intern::_presidentialPardon,
		&Intern::_shrubberyCreation,
		&Intern::_robotomyRequest
	};
	Form* form = NULL;
	for (int i = 0; i < nFunc; i++) {
		if (!formNames[i].compare(name)) {
			form = (this->*(formTypes[i]))(target);
		}
	}
	if (form == NULL)
		std::cout << "Intern can not create form with name: " << name << std::endl;
	else
		std::cout << "Intern create form: " << name << std::endl;
	return form;
}

Form* Intern::_presidentialPardon( std::string target ) { return new PresidentialPardonForm(target); }
Form* Intern::_shrubberyCreation( std::string target ) { return new ShrubberyCreationForm(target); }
Form* Intern::_robotomyRequest( std::string target) { return new RobotomyRequestForm(target); }
