#include <iostream>
#include <string>
#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
	this->_name = "Example";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "Default constructor (FragTrap) created" << std::endl;
}

FragTrap::FragTrap( std::string name ) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap" << this->_name << " has been created" << std::endl;
}

FragTrap::FragTrap( const FragTrap& copy ) {
	*this = copy;
	std::cout << "Copy constructor (FragTrap) called by: " << this->_name << std::endl;
}

FragTrap::~FragTrap( void ) {
	std::cout << "Destructor called (FragTrap) by: " << this->_name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& lhs) {
	this->_name = lhs._name;
	this->_hitPoints = lhs._hitPoints;
	this->_energyPoints = lhs._energyPoints;
	this->_attackDamage = lhs._attackDamage;

	std::cout << "Operator  = called by (FragTrap): " << this->_name
		<< " = " << lhs._name << std::endl;

	return *this;
}

void FragTrap::highFivesGuys( void ) {
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " is already dead" << std::endl;
		return ;
	}
	std::cout << this->_name << " wants to have five with everyone!" << std::endl;
}
