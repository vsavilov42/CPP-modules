#include <iostream>
#include "Cast.hpp"

int main( int argc, char *argv[] ) {
	if (argc != 2) {
		std::cout << "Usage: ./Cast + [lit]" << std::endl;
		return 1;
	}
	Cast::cast(argv[1]);
	// void Cast::convert(argv* str)
	// convert argv* to string::str, int, float, double.
	// exceptions: str = Non displayable/impossible | int = impossible
	// float = nanf | double = nan
	return 0;
}
