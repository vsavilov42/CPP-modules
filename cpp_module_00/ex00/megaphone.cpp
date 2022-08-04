#include <iostream>
#include <string>

int main (int argc, char **argv)
{
	(void)argv;
	if (argc < 2)
		std::cout << "Need atleast one argument." << std::endl;
	else
		for (int i = 1; i < argc; i++)
			for (size_t j = 0; j < std::strlen(argv[i]); j++)
				std::cout << (char)std::toupper(argv[i][j]);
	std::cout << std::endl;
	return 0;
}
