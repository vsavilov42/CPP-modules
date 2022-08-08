#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( std::string name, Weapon &weapon):_name(name),_weapon(weapon) {}

HumanA::~HumanA() {}

void	HumanA::atack() const {
	std::cout << this->_name << " is going to atack with " << this->_weapon.getType() << std::endl;
}
