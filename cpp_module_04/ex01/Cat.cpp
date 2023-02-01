#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat( void ) { 
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::~Cat( void ) { 
	delete this->_brain;
}

Cat::Cat( const Cat& copy ) {
	*this = copy;
	this->_brain = new Brain();
}

Cat& Cat::operator=( const Cat& lhs ) {
	this->Animal::operator=(lhs);
	*this->_brain = *lhs._brain;
	return *this;
}

void	Cat::makeSound( void ) const {
	std::cout << "Mew Mew" << std::endl;
}

Brain* Cat::getBrain( void ) const {
	return this->_brain;
}
