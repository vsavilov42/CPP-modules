#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog::Dog( const Dog& copy ) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
	this->_brain = new Brain();
}

Dog&	Dog::operator=( const Dog& lhs ) {
	std::cout << "Dog operator = called" << std::endl;
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
