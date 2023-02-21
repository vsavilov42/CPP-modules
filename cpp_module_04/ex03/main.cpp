#include <iostream>
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main() {

	/* subject main */
	std::cout << "Subject test: " << std::endl << std::endl;
	std::cout << "Call IMateria and add two spells: Ice and Cure" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	std::cout << std::endl;
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	/* my own main */

	std::cout << "My own tests: " << std::endl << std::endl;
	std::cout << "Create interface spell: " << std::endl;
	IMateriaSource* sourceSpells = new MateriaSource();
	sourceSpells->learnMateria(new Ice());
	sourceSpells->learnMateria(new Cure());
	
	std::cout << std::endl;
	ICharacter* mage = new Character("Mage");

	AMateria* spells;
	spells = sourceSpells->createMateria("ice");
	mage->equip(spells);

	std::cout << std::endl;
	ICharacter* paco = new Character("Paco");
	mage->use(0, *paco);
	std::cout << "Destroy paco: " << std::endl;
	delete paco;
	
	std::cout << std::endl;
	mage->unequip(0);
	spells = sourceSpells->createMateria("cure");
	mage->equip(spells);
	mage->use(0, *mage);

	std::cout << std::endl;
	mage->unequip(0);
	std::cout << std::endl;
	delete mage;
	delete sourceSpells;
	return 0;
}
