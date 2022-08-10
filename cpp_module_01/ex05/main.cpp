#include <iostream>
#include "Karen.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << USAGE << std::endl;
		return 1;
	}
	Karen *bot = new Karen;

	bot->complain(argv[1]);
/*	if (command == "HELP") {
		std::cout << HELP << std::endl;
		return 0;
	}*/

	return 0;
}
