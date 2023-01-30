#include <iostream>
#include "ClapTrap.hpp"

int main() {
	ClapTrap *def = new ClapTrap();
	ClapTrap *pmc = new ClapTrap("PMC");
	ClapTrap *cpy = new ClapTrap(*pmc);

	//Attack phase
	std::cout << std::endl << "Attack phase" << std::endl;
	def->attack("Scav1");
	pmc->attack("Scav2");
	cpy->attack("Scav3");

	//Take Damage phase
	std::cout << std::endl << "Take damage phase" << std::endl;
	def->takeDamage(8);
	pmc->takeDamage(8);
	pmc->takeDamage(8);
	pmc->takeDamage(8);
	cpy->takeDamage(10);

	//Repaired phase
	std::cout << std::endl << "Repair phase" << std::endl;
	def->beRepaired(8);
	pmc->beRepaired(8);
	cpy->beRepaired(8);

	delete def;
	delete pmc;
	delete cpy;
	return 0;
}
