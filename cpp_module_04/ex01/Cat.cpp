#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Cat contructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat::Cat( const Cat& copy ) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
	this->_brain = new Brain();
}

Cat& Cat::operator=( const Cat& lhs ) {
	std::cout << "Cat operator = called" << std::endl;
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
