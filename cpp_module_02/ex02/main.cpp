#include <iostream>
#include "Fixed.hpp"

int main() {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	Fixed j, k;

	if (j <= k)
		std::cout << "gud" << std::endl;
	else
		std::cout << "bad" << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	//std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}
