#include <iostream>
#include <cmath> /* roundf */
#include "Fixed.hpp"

Fixed::Fixed( void ):_bits(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed( const int n ) {
	std::cout << "Int constructor called" << std::endl;
	this->_bits = n << Fixed::_numBits;
}

Fixed::Fixed( const float n ) {
	std::cout << "Float constuctor called" << std::endl;
	this->_bits = roundf(n * (1 << Fixed::_numBits));
}

Fixed::~Fixed( void ) { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed( const Fixed& copy ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

//Overload operators

std::ostream &operator<<( std::ostream& os, const Fixed& lhs ) {
	return os << lhs.toFloat();
}

//Assignment operators

Fixed& Fixed::operator=( const Fixed& lhs ) {
	std::cout << "Assignation operator called" << std::endl;
	this->_bits = lhs.getRawBits();
	return *this;
}

//Relational

bool Fixed::operator==( const Fixed& lhs ) const {
	return this->_bits == lhs._bits;
}

bool Fixed::operator!=( const Fixed& lhs ) const {
	return !operator==(lhs);
}

bool Fixed::operator>( const Fixed& lhs ) const {
	return this->_bits > lhs._bits;
}

bool Fixed::operator<( const Fixed& lhs ) const {
	return this->_bits < lhs._bits;
}

bool Fixed::operator>=( const Fixed& lhs ) const {
	return !operator<(lhs);
}

bool Fixed::operator<=( const Fixed& lhs ) const {
	return !operator>(lhs);
}

//Binary arithmetic

Fixed Fixed::operator+( const Fixed& lhs ) const {
	Fixed res = static_cast<float>(this->_bits) / (1 << this->_numBits) + static_cast<float>(lhs._bits) / (1 << this->_numBits);
	return res;
}

Fixed Fixed::operator-( const Fixed& lhs ) const {
	Fixed res = static_cast<float>(this->_bits) / (1 << this->_numBits) - static_cast<float>(lhs._bits) / (1 << this->_numBits);
	return res;
}

Fixed Fixed::operator*( const Fixed& lhs ) const {
	Fixed res = static_cast<float>(this->_bits) / (1 << this->_numBits) * static_cast<float>(lhs._bits) / (1 << this->_numBits);
	return res;
}

Fixed Fixed::operator/( const Fixed& lhs ) const {
	Fixed res = static_cast<float>(this->_bits) / (1 << this->_numBits) / static_cast<float>(lhs._bits) / (1 << this->_numBits);
	return res;
}

// Increment - Decrement class ++a, a++.
Fixed& Fixed::operator++( void ) {
	this->_bits += 1;
	return *this;
}

Fixed Fixed::operator++( int ) {
	Fixed tmp = *this;
	this->_bits += 1;
	return tmp;
}

Fixed& Fixed::operator--( void ) {
	this->_bits -= 1;
	return *this;
}

Fixed Fixed::operator--( int ) {
	Fixed tmp = *this;
	this->_bits -= 1;
	return tmp;
}

//Min, Max operators

const Fixed& Fixed::min( const Fixed& f1, const Fixed& f2 ) {
	if (f1 < f2)
		return f1;
	else
		return f2;
}

const Fixed& Fixed::max( const Fixed& f1, const Fixed& f2 ) {
	if (f1 < f2)
		return f2;
	else
		return f1;
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
	return static_cast<float>(this->_bits) / (1 << Fixed::_numBits);
}

int	Fixed::toInt( void ) const {
	return this->_bits >> Fixed::_numBits;
}
