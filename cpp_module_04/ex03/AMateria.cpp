#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria( void ) { }

AMateria::~AMateria( void ) { }

AMateria::AMateria( const std::string& type ):_type(type) { }

const std::string& AMateria::getType( void ) const {
	return this->_type;
}

void AMateria::use( ICharacter& target ) {
	(void)target;
}
