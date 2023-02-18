#include <iostream>
#include "Bureaucrat.hpp"

int main( void ) {

	Bureaucrat *Paco = new Bureaucrat("Paco", 3);
	std::cout << "------------- Bureaucrat ------------>  " << *Paco << std::endl;

	try {
		std::cout << "Try 1: " << *Paco << std::endl;
		Paco->increment();
		std::cout << "Try 2: " << *Paco << std::endl;
		Paco->increment();
		std::cout << "Try 3: " << *Paco << std::endl;
		Paco->increment();
		std::cout << "Try 4: " << *Paco << std::endl;
		Paco->increment();
		std::cout << "Try 5: " << *Paco << std::endl;
		Paco->increment();
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	//Check grade didn't change
	std::cout << *Paco << std::endl;

	delete Paco;

	std::cout << std::endl;

	Bureaucrat *Manolo = new Bureaucrat("Manolo", 70);
	std::cout << "------------- Bureaucrat ------------>  " << *Manolo << std::endl;

	try {
		std::cout << "Try 1: " << *Manolo << std::endl;
		Paco->decrement();
		std::cout << "Try 2: " << *Manolo << std::endl;
		Paco->decrement(40);
		std::cout << "Try 3: " << *Manolo << std::endl;
		Paco->decrement(39);
		std::cout << "Try 4: " << *Manolo << std::endl;
		Paco->decrement(40);
		std::cout << "Try 5: " << *Manolo << std::endl;
		Paco->decrement(40);
	} catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}

	//Check grade didn't change
	std::cout << *Manolo << std::endl;

	delete Manolo;

	std::cout << std::endl;

	std::cout << "------------- Bureaucrat ------------"<< std::endl
	<< "Create Bureaucrat inside the exception with range 151" << std::endl;

	try {
		Bureaucrat Range("Range", 151);
	} catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "Valid test: " << std::endl;

	Bureaucrat *Admin = new Bureaucrat("Admin", 3);
	std::cout << "------------- Bureaucrat ------------>  " << *Admin << std::endl;

	try {
		std::cout << "Try 1: " << *Admin << std::endl;
		Admin->increment();
		std::cout << "Try 2: " << *Admin << std::endl;
		Admin->increment();
	} catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}

	std::cout << *Admin << std::endl;
	std::cout << "Admin has maximun grade" << std::endl;
	delete Admin;
	return 0;
}
