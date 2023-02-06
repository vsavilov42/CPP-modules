#ifndef CURE_HPP_
# define CURE_HPP_

# include "AMateria.hpp"

# include <string>

class Cure : public AMateria {
	public:
		Cure( void );
		~Cure( void );
		Cure( const Cure& copy );
		Cure& operator=( const Cure& lhs );

		AMateria* clone( void ) const;
		void use( ICharacter& target );
};

#endif
