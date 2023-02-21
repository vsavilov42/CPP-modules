#include <iostream>
#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain( const Brain& copy ) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
}

Brain& Brain::operator=( const Brain& lhs ) {
	std::cout << "Brain operator = called" << std::endl;
	for (int i = 0; i < Brain::nIdeas; i++) {
		this->ideas[i] = lhs.ideas[i];
	}

	return *this;
}
