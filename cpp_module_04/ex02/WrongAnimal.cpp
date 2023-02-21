#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ):_type("WrongAnimal") { }

WrongAnimal::~WrongAnimal( void ) { }

WrongAnimal::WrongAnimal( const WrongAnimal& copy ) {
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& lhs ) {
	this->_type = lhs._type;
	return *this;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal *crash*" << std::endl;
}

const std::string& WrongAnimal::getType( void ) const {
	return this->_type;
}
