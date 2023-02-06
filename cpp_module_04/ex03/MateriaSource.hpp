#ifndef MATERIASOURCE_HPP_
# define MATERIASOURCE_HPP_

# include <string>

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource( void );
		~MateriaSource( void );
		MateriaSource( const MateriaSource& copy );
		MateriaSource& operator=( const MateriaSource& lhs );

		void learnMateria( AMateria* materia );
		AMateria* createMateria( const std::string& type );
	private:
		static const int maxMateria = 4;

		AMateria* _materias[MateriaSource::maxMateria];
		int _nMateria;
};

#endif
