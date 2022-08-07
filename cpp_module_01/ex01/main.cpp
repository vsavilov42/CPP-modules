#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name);

int main() {
	int	n = 5;
	Zombie *horde = zombieHorde(n, "Garden 1-1");
	
	for(int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;

	return 0;
}
