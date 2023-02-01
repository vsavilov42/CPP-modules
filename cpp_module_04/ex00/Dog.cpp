#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog( void ) { 
	this->_type = "Dog";
}

Dog::~Dog( void ) { }

Dog::Dog( const Dog& copy ) {
	*this = copy;
}

Dog&	Dog::operator=( const Dog& lhs ) {
	this->_type = lhs._type;
	return *this;
}

void	Dog::makeSound( void ) const {
	std::cout << "Woff Woff" << std::endl;
}
