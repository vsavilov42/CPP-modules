#include <iostream>
#include <cmath> /* roundf */
#include "Fixed.hpp"

Fixed::Fixed():_bits(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed( const int n ):_bits(n) { std::cout << "Int constructor called" << std::endl; }

Fixed::Fixed( const float n ):_bits(n) { std::cout << "Float constuctor called" << std::endl; }

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed( const Fixed& copy ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

std::ostream &operator<<( std::ostream& os, const Fixed& lhs ) {
	return os << lhs.toFloat();
}

Fixed& Fixed::operator=( const Fixed& lhs ) {
	std::cout << "Assignation operator called" << std::endl;
	this->_bits = lhs.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_bits;
}

int	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	return raw;
}

float	Fixed::toFloat( void ) const {
	return (float)this->_bits / (1 << Fixed::_numBits);
}

int	Fixed::toInt( void ) const {
	return this->_bits >> Fixed::_numBits;
}
