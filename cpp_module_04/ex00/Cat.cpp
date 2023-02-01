#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat( void ) { 
	this->_type = "Cat";
}

Cat::~Cat( void ) { }

Cat::Cat( const Cat& copy ) {
	*this = copy;
}

Cat& Cat::operator=( const Cat& lhs ) {
	this->_type = lhs._type;
	return *this;
}

void	Cat::makeSound( void ) const {
	std::cout << "Mew Mew" << std::endl;
}
