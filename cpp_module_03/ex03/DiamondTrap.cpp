#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) {
	this->_name = "ExampleDiamondTrap";
	this->ClapTrap::_name = std::string("ExampleDiamondTrap").append("_clap_name");
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << "Default constructor (DiamondTrap) created named: "
		<< this->_name << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) {
	this->_name = name;
	this->ClapTrap::_name = name.append("_clap_name");
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << "DiamondTrap " << this->_name << " has been created" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& copy ) {
	*this = copy;

	std::cout << "Copy constructor (DiamondTrap) called by: " << this->_name << std::endl;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "Destructor called (DiamondTrap) by: " << this->_name << std::endl;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& lhs ) {
	this->_name = lhs._name;
	this->ClapTrap::_name = lhs.ClapTrap::_name;
	this->_hitPoints = lhs._hitPoints;
	this->_energyPoints = lhs._energyPoints;
	this->_attackDamage = lhs._attackDamage;

	std::cout << "Operator = called by (DiamondTrap): " << this->_name
		<< " = " << lhs._name << std::endl;

	return *this;
}

void DiamondTrap::whoAmI( void ) {
	std::cout << "My DiamondTrap name is: " << this->_name
		<< " ---- my ClapTrap name is: " << this->ClapTrap::_name << std::endl;
}
