#include <iostream>
#include "Chicken.hpp"

Chicken::Chicken( void ) {
	std::cout << "Chicken constructor called" << std::endl;
	this->_type = "Chicken Fried";
}

Chicken::~Chicken( void ) {
	std::cout << "Chicken destructor called" << std::endl;
}

Chicken::Chicken( const Chicken& copy ) {
	std::cout << "Chicken copy constructor called" << std::endl;
	*this = copy;
}

Chicken& Chicken::operator=( const Chicken& lhs ) {
	std::cout << "Chicken operator = called" << std::endl;
	this->Animal::operator=(lhs);
	return *this;
}

void Chicken::makeSound( void ) const {
	std::cout << "Pszzzzzzzz *Fryer sounds*" << std::endl;
}
