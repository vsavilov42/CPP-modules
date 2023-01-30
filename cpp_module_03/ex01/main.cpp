#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ClapTrap *def = new ClapTrap();
	ScavTrap *pmc = new ScavTrap("PMC");
	ScavTrap *defScav = new ScavTrap("Scav");
	ScavTrap *scav = new ScavTrap(*defScav);

	//Attack phase
	std::cout << std::endl << "Attack phase" << std::endl;
	def->attack("Tagilla");
	pmc->attack("Shturman");
	scav->attack("Rashala");

	//Take Damage phase
	std::cout << std::endl << "Take damage phase" << std::endl;
	def->takeDamage(8);
	pmc->takeDamage(8);
	pmc->takeDamage(8);
	pmc->takeDamage(8);
	scav->takeDamage(10);

	//Repaired phase
	std::cout << std::endl << "Repair phase" << std::endl;
	def->beRepaired(8);
	pmc->beRepaired(8);
	scav->beRepaired(8);

	std::cout << std::endl;

	delete def;
	delete pmc;
	delete defScav;
	delete scav;
	return 0;
}
