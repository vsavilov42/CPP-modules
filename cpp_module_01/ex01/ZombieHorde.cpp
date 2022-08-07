#include <iostream> /* nothrow = protect of overloads */
#include <string>
#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name) {
	if (N <= 0) { return NULL; }

	Zombie *horde = new (std::nothrow) Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].zombieName(name);
	return (horde);
}
