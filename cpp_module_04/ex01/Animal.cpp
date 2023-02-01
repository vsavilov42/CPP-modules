#include <iostream>
#include "Animal.hpp"

Animal::Animal( void ):_type( "Unspecified" ) { }

Animal::~Animal( void ) { }

Animal::Animal( const Animal& copy ) {
	*this = copy;
}

Animal&	Animal::operator=( const Animal& lhs ) {
	this->_type = lhs._type;
	return *this;
}

void	Animal::makeSound( void ) const {
	std::cout << "*nothing*" << std::endl;
}

const std::string& Animal::getType( void ) const {
	return _type;
}
