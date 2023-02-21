#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ):_type("WrongAnimal") {
	std::cout << "Wrong animal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "Wrong animal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& copy ) {
	std::cout << "Wrong animal copy constructor called" << std::endl;
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& lhs ) {
	std::cout << "Wrong animal operator = called" << std::endl;
	this->_type = lhs._type;
	return *this;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal *crash*" << std::endl;
}

const std::string& WrongAnimal::getType( void ) const {
	return this->_type;
}
