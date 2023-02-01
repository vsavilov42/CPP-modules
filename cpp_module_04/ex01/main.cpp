#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Chicken.hpp"

int main() {
	Cat *cat = new Cat();	
	Dog *dog = new Dog();	
	Chicken *chicken = new Chicken();	

	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << chicken->getType() << std::endl;

	std::cout << std::endl << "Make sound: " << std::endl;

	cat->makeSound();
	dog->makeSound();
	chicken->makeSound();

	//Brain tests
	std::cout << std::endl << "Testing brain: " << std::endl;

	cat->getBrain()->ideas[0] = "Mew Mew Mew Mew";
	cat->getBrain()->ideas[1] = "Mew Mew?";

	std::cout << "--> Cat Brain be like: " << std::endl;
	for (int i = 0; i < 2; i++) {
		std::cout << cat->getBrain()->ideas[i] << std::endl;
	}

	//Testing deep copy
	
	std::cout << std::endl << "Testing deep copy: " << std::endl;
	
	std::cout << std::endl << "Create second cat" << std::endl;
	Cat *cat2 = new Cat();

	std::cout << std::endl << "Cat2 ideas be like: " << std::endl;
	for (int i = 0; i < 2; i++) {
		std::cout << cat2->getBrain()->ideas[i] << std::endl;
	}

	std::cout << "(it shows nothig because is a cat, he doesn't have ideas)" << std::endl;
	std::cout << std::endl << "--> Deep copy cat2 = cat1" << std::endl;
	
	//Deep copy
	*cat2 = *cat;

	//Testing copy
	for (int i = 0; i < 2; i++) {
		std::cout << cat2->getBrain()->ideas[i] << std::endl;
	}

	delete cat;
	delete cat2;
	delete dog;
	delete chicken;
	return 0;
}
