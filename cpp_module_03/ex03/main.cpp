#include <iostream>
#include "DiamondTrap.hpp"

int main() {
	ScavTrap *def = new ScavTrap();
	DiamondTrap *pmc = new DiamondTrap("PMC");
	DiamondTrap *defScav = new DiamondTrap("Scav");
	DiamondTrap *scav = new DiamondTrap(*defScav);

	//Attack phase
	std::cout << std::endl << "Attack phase" << std::endl;
	def->attack("Tagilla");
	pmc->attack("Shturman");
	scav->attack("Rashala");

	//Take Damage phase
	std::cout << std::endl << "Take damage phase" << std::endl;
	def->takeDamage(8);
	pmc->takeDamage(20);
	pmc->takeDamage(200);
	pmc->takeDamage(20);
	scav->takeDamage(10);

	//Repaired phase
	std::cout << std::endl << "Repair phase" << std::endl;
	def->beRepaired(50);
	pmc->beRepaired(2);
	scav->beRepaired(10);

	//Guard phase
	std::cout << std::endl << "Guard phase" << std::endl;
	def->guardGate();

	pmc->guardGate();
	scav->guardGate();

	//High Five phase
	std::cout << std::endl << "High five phase" << std::endl;
	pmc->highFivesGuys();
	scav->highFivesGuys();

	//Who Am I phase
	std::cout << std::endl << "Who Am I phase" << std::endl;
	pmc->whoAmI();
	scav->whoAmI();

	std::cout << std::endl;

	delete def;
	delete pmc;
	delete defScav;
	delete scav;
	return 0;
}
