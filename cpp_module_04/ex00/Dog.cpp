#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog( const Dog& copy ) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog&	Dog::operator=( const Dog& lhs ) {
	std::cout << "Dog operator = called" << std::endl;
	this->_type = lhs._type;
	return *this;
}

void	Dog::makeSound( void ) const {
	std::cout << "Woff Woff" << std::endl;
}
