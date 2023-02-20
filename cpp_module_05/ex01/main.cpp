#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void ) {

	Bureaucrat *Paco = new Bureaucrat("Paco", 40);
	Bureaucrat *Manolo = new Bureaucrat("Manolo", 30);
	Form	*form = new Form("Form", 35, 20);
	std::cout << "------------- Form ------------>  " << *form << std::endl;

	try {
		Paco->signForm(*form);
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	//Paco cant sign form
	std::cout << *Paco << std::endl;

	try {
		Manolo->signForm(*form);
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	//Manolo can sign form
	std::cout << *Paco << std::endl;

	std::cout << std::endl << "Same but calling Form instead of Bureaucrat" << std::endl;
	try {
		form->beSigned(*Paco);
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	//Paco cant sign form
	std::cout << *Paco << std::endl;

	try {
		form->beSigned(*Manolo);
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	//Paco cant sign form
	std::cout << *Paco << std::endl;
	
	delete Paco;
	delete Manolo;
	delete form;

	return 0;
}
