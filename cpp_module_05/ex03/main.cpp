#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

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

	std::cout << "\033[1;37mCreate Intern: \033[1;0m" << std::endl;

	Intern *intern = new Intern();

	std::cout << std::endl;
	std::cout << "\033[1;31mFirst, is going to create a bad form type: \033[1;0m" << std::endl;
	Form *fail = intern->makeForm("bad form", "fail");
	std::cout << fail << std::endl;

	std::cout << "Intern is going to create every form type: " << std::endl;
	
	std::cout << "Valid form types: " << std::endl;
	Form *ppf = intern->makeForm("presidential pardon", "ppf");
	std::cout << std::endl;
	Form *rrf = intern->makeForm("robotomy request", "rrf");
	std::cout << std::endl;
	Form *scf = intern->makeForm("shrubbery creation", "scf");

	std::cout << std::endl;
	std::cout << "\033[1;33m----------- Presidential Form ----------\033[1;0m" << std::endl << std::endl;
	
	std::cout << "Execute without sign (error): " << std::endl;
	try {
		b1->execute(*ppf);
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "\033[1;33mSign and execute: \033[1;0m" << std::endl;
	try {
		b1->signForm(*ppf);
		b1->execute(*ppf);
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try {
		b1->signForm(*rrf);
		b1->execute(*rrf);
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try {
		b1->signForm(*scf);
		b1->execute(*scf);
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	delete ppf;
	delete rrf;
	delete scf;

	std::cout << std::endl;
	std::cout << "\033[1;34m----------- Robotomy Request Form ----------\033[1;0m" << std::endl << std::endl;

	Form *ppf2 = intern->makeForm("presidential pardon", "ppf2");
	Form *rrf2 = intern->makeForm("robotomy request", "rrf2");
	Form *scf2 = intern->makeForm("shrubbery creation", "scf2");
	std::cout << std::endl;

	std::cout << "b150 try to sign form: " << std::endl;
	try {
		b150->signForm(*ppf2);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		b150->signForm(*rrf2);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		b150->signForm(*scf2);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "b100 is going to sign Robotomy: " << std::endl;
	try {
		b100->signForm(*rrf2);
		b100->execute(*rrf2);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "b50 is going to sign Robotomy: " << std::endl;
	try {
		b50->signForm(*rrf2);
		b50->execute(*rrf2);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\033[1;31mb50 can sign but can't execute. Need at least 45 lvl for exec.\033[1;0m" << std::endl;

	std::cout << std::endl << "b1 is going to execute it. Robotomy is already signed by b50" << std::endl;
	try {
		b1->execute(*rrf2);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	delete ppf2;
	delete rrf2;
	delete scf2;

	std::cout << std::endl;

	std::cout << "\033[1;32m----------- Shruberry Creation Form ----------\033[1;0m" << std::endl << std::endl;

	Form *ppf3 = intern->makeForm("presidential pardon", "ppf3");
	Form *rrf3 = intern->makeForm("robotomy request", "rrf3");
	Form *scf3 = intern->makeForm("shrubbery creation", "scf3");
	std::cout << std::endl;
	std::cout << "b150 try to sign form: " << std::endl;

	try {
		b150->signForm(*scf3);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "b150 can't sign Shrubbery form:" << std::endl;

	std::cout << std::endl << "b100 try to sign form: " << std::endl;
	try {
		b100->signForm(*ppf3);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		b100->signForm(*rrf3);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		b100->signForm(*scf3);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		b100->execute(*scf3);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "\033[1;37mCall destructors:\033[1;0m" << std::endl;
	delete ppf3;
	delete rrf3;
	delete scf3;

	delete b150;
	delete b100;
	delete b50;
	delete b1;

	delete intern;
	return 0;
}
