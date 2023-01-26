#include <iostream>
#include "Point.hpp"

Point::Point( void ):_X( Fixed() ), _Y( Fixed() ) { }

Point::~Point( void ) { }

Point::Point( const Point& copy ):_X( copy._X ), _Y( copy._Y ) { }

Point::Point( const float x, const float y ):_X( Fixed( x ) ), _Y( Fixed( y ) ) { }

Point::Point( const Fixed x, const Fixed y ):_X( x ), _Y( y ) { }

Point& Point::operator=( const Point& lhs ) {
	( void )lhs;
	return *this;
}

Fixed Point::getX( void ) const {
	return this->_X;
}

Fixed Point::getY( void ) const {
	return this->_Y;
} 

std::ostream &operator<<( std::ostream& os, const Point& lhs ) {
	return os << lhs.getX() << " "<< lhs.getY();
}
