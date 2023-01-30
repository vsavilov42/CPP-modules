#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ):_name("Example"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Default constructor (ClapTrap) created" << std::endl;
}

ClapTrap::ClapTrap( std::string name ):_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << this->_name << " has been created" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& copy) {
	*this = copy;
	std::cout << "Copy constructor called by: " << this->_name << std::endl;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Destructor called by: " << this->_name << std::endl;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& lhs ) {
	this->_name = lhs._name;
	this->_hitPoints = lhs._hitPoints;
	this->_energyPoints = lhs._hitPoints;
	this->_attackDamage = lhs._attackDamage;

	std::cout << "Operator = called: " << this->_name << " = " << lhs._name << std::endl;

	return *this;
}

void ClapTrap::attack( const std::string& target ) {
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " is already dead" << std::endl;
		return ;
	}
	std::cout << this->_name << " attack to " << target
		<< " doing " << this->_attackDamage << " damage" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) {
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " is already dead" << std::endl;
		return ;
	}
	if (amount >= this->_hitPoints) {
		this->_hitPoints = 0;
	}
	else
		this->_hitPoints -= amount;
	std::cout << this->_name << " has taken " << amount << " damage" << std::endl;
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " have been murdered D:" << std::endl;
	}
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " is already dead" << std::endl;
		return ;
	}
	this->_hitPoints += amount;
	std::cout << "God has decided to bless you with " << amount
		<< " more life points :O" << std::endl;
}
