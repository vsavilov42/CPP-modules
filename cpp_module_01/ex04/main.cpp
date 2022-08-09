#include <iostream>
#include "sed.hpp"

int main(int argc, char **argv) {
	if (argc != 4 || !argv[2] || !argv[3]) {
		std::cout << USAGE << std::endl;
		return 1;
	}
	if (!Sed::manageFile(argv[1], argv[2], argv[3]))
		return 1;
	return 0;
}
