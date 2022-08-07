#include <iostream>
#include <string>

#include "Zombie.hpp"

Zombie	*newZombie( std::string name);
void	randomChump( std::string name );

int main() {
	Zombie *flagZombie = new Zombie("Flag Zombie");
	flagZombie->announce();
	randomChump("Conehead Zombie");
	delete flagZombie;
	std::cout << std::endl;

	return 0;
}
