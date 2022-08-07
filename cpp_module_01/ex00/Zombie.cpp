#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( std::string name ):_name(name) { }

Zombie::~Zombie() { std::cout << "Crazy Dave has been eaten by " << this->_name << std::endl; }

void	Zombie::announce() { std::cout << "Hello, we are about to launch an all-out attack to your houze. "
	<< "Sincerely, the " << this->_name << std::endl; }

