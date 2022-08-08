#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string name ):_name(name),_weapon(NULL) {}

HumanB::~HumanB() {}

void	HumanB::atack() const {
	if (this->_weapon)
		std::cout << this->_name << " is going to atack with " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " runaway without any weapon " << std::endl;
}

void	HumanB::setWeapon(const Weapon &weapon) {
	this->_weapon = (Weapon*)&weapon;
}
