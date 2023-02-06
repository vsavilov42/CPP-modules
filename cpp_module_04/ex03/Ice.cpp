#include <iostream>
#include "Ice.hpp"

Ice::Ice( void ):AMateria("Ice") { }

Ice::~Ice( void ) { }

Ice::Ice( const Ice& copy ):AMateria("Ice") {
	*this = copy;
}

Ice& Ice::operator=( const Ice& lhs ) {
	this->_type = lhs._type;
	return *this;
}

AMateria* Ice::clone( void ) const {
	return new Ice(*this);
}

void Ice::use( ICharacter& target ) {
	std::cout << "Use magic ice in " << target.getName() << std::endl;
}
