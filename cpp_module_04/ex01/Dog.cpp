#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog( void ) { 
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::~Dog( void ) {
	delete this->_brain;
}

Dog::Dog( const Dog& copy ) {
	*this = copy;
	this->_brain = new Brain();
}

Dog&	Dog::operator=( const Dog& lhs ) {
	this->Animal::operator=(lhs);
	*this->_brain = *lhs._brain;
	return *this;
}

void	Dog::makeSound( void ) const {
	std::cout << "Woff Woff" << std::endl;
}

Brain* Dog::getBrain( void ) const {
	return this->_brain;
}
