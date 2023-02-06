#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed( void ):_bits(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::~Fixed( void ) { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed( const Fixed& copy ) {
	std::cout << "Copy construct called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=( const Fixed& lhs ) {
	std::cout << "Asignation operator called" << std::endl;
	this->_bits = lhs.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const  {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_bits;
}

int	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	return raw;
}
