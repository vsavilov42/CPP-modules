#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal *empty = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;

	dog->makeSound();
	cat->makeSound();
	empty->makeSound();

	delete empty;
	delete cat;
	delete dog;
	
	//Wrong Animals
	
	const WrongAnimal *wa = new WrongAnimal();
	const WrongAnimal *wc = new WrongCat();

	std::cout << std::endl << "Testing WrongAnimals:" << std::endl;
	std::cout << wa->getType() << std::endl;
	std::cout << wc->getType() << std::endl;

	wa->makeSound();
	wc->makeSound();

	delete wa;
	delete wc;
	return 0;
}
