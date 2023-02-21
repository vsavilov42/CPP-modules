#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	std::cout << "Wrong cat constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat( void ) {
	std::cout << "Wrong cat destructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat& copy ) {
	std::cout << "Wrong cat copy constructor called" << std::endl;
	*this = copy;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "WrongMew Mew" << std::endl;
}
