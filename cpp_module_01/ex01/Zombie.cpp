#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie():_name("Zombie") {}

Zombie::Zombie( std::string name ):_name(name) {}

Zombie::~Zombie() { std::cout << "Crazy Dave has been eaten by " << this->_name << std::endl; }

void	Zombie::announce() {
	std::cout << "Hello, We herd you were having a pool party. " << std::endl
	<< "We think that iz fun. Well be rite over. Sincerely, the " << this->_name << std::endl
	<< std::endl;
}

void	Zombie::zombieName( std::string name ) { this->_name = name; }
