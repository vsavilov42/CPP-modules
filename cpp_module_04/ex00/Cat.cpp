#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat( const Cat& copy ) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat& Cat::operator=( const Cat& lhs ) {
	std::cout << "Cat operator =  called" << std::endl;
	this->_type = lhs._type;
	return *this;
}

void	Cat::makeSound( void ) const {
	std::cout << "Mew Mew" << std::endl;
}
