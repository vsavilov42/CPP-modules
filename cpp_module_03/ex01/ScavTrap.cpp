#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
	this->_name = "Example";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "Default constructor (ScavTrap) created" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap " << this->_name << " has been created" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& copy ) {
	*this = copy;
	std::cout << "Copy constructor (ScavTrap) called by: " << this->_name << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "Destructor called by: " <<  this->_name << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& lhs ) {
	this->_name = lhs._name;
	this->_hitPoints = lhs._hitPoints;
	this->_energyPoints = lhs._hitPoints;
	this->_attackDamage = lhs._attackDamage;

	std::cout << "Operator = called by (ScavTrap): " << this->_name
		<< "=" << lhs._name << std::endl;

	return *this;
}

void ScavTrap::guardGate( void ) {
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " is already dead" << std::endl;
		return ;
	}
	std::cout << "SR." << this->_name << "ScapTrap change to GATE KEEPER MODE" << std::endl;
}
