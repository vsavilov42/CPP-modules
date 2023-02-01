#include <iostream>
#include "Brain.hpp"

Brain::Brain( void ) { }

Brain::~Brain( void ) { }

Brain::Brain( const Brain& copy ) {
	*this = copy;
}

Brain& Brain::operator=( const Brain& lhs ) {
	for (int i = 0; i < Brain::nIdeas; i++) {
		this->ideas[i] = lhs.ideas[i];
	}

	return *this;
}
