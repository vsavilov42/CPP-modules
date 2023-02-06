#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ):_nMateria(0) {
	for (int i = 0; i < MateriaSource::maxMateria; i++) {
		this->_materias[i] = NULL;
	}
}

MateriaSource::~MateriaSource( void ) {
	for (int i = 0; i < MateriaSource::maxMateria; i++) {
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
	}
}

MateriaSource::MateriaSource( const MateriaSource& copy ) {
	*this = copy;
}

MateriaSource& MateriaSource::operator=( const MateriaSource& lhs ) {
	this->_nMateria = lhs._nMateria;

	for (int i = 0; i < MateriaSource::maxMateria; i++) {
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
		if (lhs._materias[i] != NULL) {
			this->_materias[i] = lhs._materias[i]->clone();
		}
		else
			this->_materias[i] = NULL;
	}
	return *this;
}

void MateriaSource::learnMateria( AMateria* materia ) {
	if (this->_nMateria < MateriaSource::maxMateria) {
		this->_materias[this->_nMateria] = materia;
		this->_nMateria++;
	}
}

AMateria* MateriaSource::createMateria( const std::string& type ) {
	for (int i = 0; i < MateriaSource::maxMateria; i++) {
		if (this->_materias[i]->getType() == type) {
			return this->_materias[i]->clone();
		}
	}
	return NULL;
}
