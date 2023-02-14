#include <iostream>
#include "Cure.hpp"

Cure::Cure( void ):AMateria("cure") { }

Cure::~Cure( void ) { }

Cure::Cure( const Cure& copy ):AMateria("cure") {
	*this = copy;
}

Cure& Cure::operator=( const Cure& lhs ) {
	this->_type = lhs._type;
	return *this;
}

AMateria* Cure::clone( void ) const {
	return new Cure(*this);
}

void Cure::use( ICharacter& target ) {
	std::cout << target.getName() << "Use Heal magic" << std::endl;
}
