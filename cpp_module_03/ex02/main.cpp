#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	ScavTrap *def = new ScavTrap();
	FragTrap *pmc = new FragTrap("PMC");
	FragTrap *defScav = new FragTrap("Scav");
	FragTrap *scav = new FragTrap(*defScav);

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
	def->beRepaired(8);
	pmc->beRepaired(8);
	scav->beRepaired(8);

	//Guard phase
	std::cout << std::endl << "Guard phase" << std::endl;
	def->guardGate();

	//High Five phase
	std::cout << std::endl << "High five phase" << std::endl;
	pmc->highFivesGuys();
	scav->highFivesGuys();

	std::cout << std::endl;

	delete def;
	delete pmc;
	delete defScav;
	delete scav;
	return 0;
}
