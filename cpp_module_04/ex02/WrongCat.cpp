#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	this->_type = "WrongCat";
}

WrongCat::~WrongCat( void ) { }

WrongCat::WrongCat( const WrongCat& copy ) {
	*this = copy;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "WrongMew Mew" << std::endl;
}
