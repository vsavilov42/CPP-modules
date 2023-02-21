#include <iostream>
#include "Animal.hpp"

Animal::Animal( void ):_type( "Unspecified" ) {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal( const Animal& copy ) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal&	Animal::operator=( const Animal& lhs ) {
	std::cout << "Animal operator = called" << std::endl;
	this->_type = lhs._type;
	return *this;
}

void	Animal::makeSound( void ) const {
	std::cout << "*nothing*" << std::endl;
}

const std::string& Animal::getType( void ) const {
	return _type;
}
