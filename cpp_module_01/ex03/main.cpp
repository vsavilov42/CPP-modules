#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

int main() {
	Weapon	weapon = Weapon("Sword");
	HumanA	paco("Paco", weapon);
	std::cout << "HumanA:" << std::endl;
	paco.atack();
	weapon.setType("M4A1");
	paco.atack();
	std::cout << std::endl;

	std::cout << "HumanB:" << std::endl;
	HumanB manolo("Manolo");
	manolo.atack();
	manolo.setWeapon(weapon);
	manolo.atack();
	weapon.setType("AK47");
	manolo.atack();
	std::cout << std::endl;
	return 0;
}
