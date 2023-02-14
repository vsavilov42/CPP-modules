#include <iostream>
#include "Character.hpp"

Character::Character( void ) { }

Character::Character( const std::string& name ):_name(name), _nEquiped(0) {
	for (int i = 0; i < Character::maxInventory; i++) {
		this->_inventory[i] = NULL;
	}
}

Character::~Character( void ) {
	for (int i = 0; i < Character::_nEquiped; i++) {
		delete this->_inventory[i];
	}
}

Character::Character( const Character& copy ) {
	*this = copy;
}

Character& Character::operator=( const Character& lhs ) {
	this->_name = lhs._name;
	this->_nEquiped = lhs._nEquiped;
	for (int i = 0; i < Character::maxInventory; i++) {
		this->_inventory[i] = lhs._inventory[i]->clone();
	}
	return *this;
}

const std::string& Character::getName( void ) const {
	return this->_name;
}

void Character::equip( AMateria* m ) {
	if (this->_nEquiped < Character::maxInventory) {
		this->_inventory[this->_nEquiped] = m;
		this->_nEquiped++;
	}
}

void Character::unequip( int idx ) {
	int i;
	if (idx >= 0 && idx < this->_nEquiped) {
		delete this->_inventory[idx];
		for (i = idx; i < this->_nEquiped - 1; i++) {
			this->_inventory[i] = this->_inventory[i + 1];
		}
		this->_inventory[i] = NULL;
		--(this->_nEquiped);
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < this->_nEquiped) {
		this->_inventory[idx]->use(target);
	}
	else
		std::cout << "Can't use materia with id " << idx << std::endl;
}
