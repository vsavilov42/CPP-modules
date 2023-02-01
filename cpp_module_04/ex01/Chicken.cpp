#include <iostream>
#include "Chicken.hpp"

Chicken::Chicken( void ) {
	this->_type = "Chicken Fried";
}

Chicken::~Chicken( void ) { }

Chicken::Chicken( const Chicken& copy ) {
	*this = copy;
}

Chicken& Chicken::operator=( const Chicken& lhs ) {
	this->Animal::operator=(lhs);
	return *this;
}

void Chicken::makeSound( void ) const {
	std::cout << "Pszzzzzzzz *Fryer sounds*" << std::endl;
}
