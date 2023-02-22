#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main( void ) {
	std::cout << "------------- Form ------------>  " << std::endl;

	std::cout << "Create every Bureaucrat: " << std::endl;
	Bureaucrat *b150 = new Bureaucrat("b150", 150);
	Bureaucrat *b100 = new Bureaucrat("b100", 100);
	Bureaucrat *b50 = new Bureaucrat("b50", 50);
	Bureaucrat *b1 = new Bureaucrat("b1", 1);

	std::cout << std::endl << "Show every bureaucrat: " << std::endl;
	std::cout << *b1 << std::endl;
	std::cout << *b50 << std::endl;
	std::cout << *b100 << std::endl;
	std::cout << *b150 << std::endl;
	std::cout << std::endl;


	std::cout << "Create every Form type: " << std::endl;

	PresidentialPardonForm *ppf = new PresidentialPardonForm("ppf");
	//RobotomyRequestForm *rrf = new RobotomyRequestForm("rrf");
	//ShrubberyCreationForm *scf = new ShrubberyCreationForm("scf");

	std::cout << std::endl;
	std::cout << *ppf << std::endl;
	//std::cout << *rrf << std::endl;
	//std::cout << *scf << std::endl;
	std::cout << std::endl;

	std::cout << "----------- Presidential Form ----------" << std::endl << std::endl;
	try {
		b1->execute(*ppf);
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
