#ifndef ICE_HPP_
# define ICE_HPP_

# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice( void );
		~Ice( void );
		Ice( const Ice& copy );
		Ice& operator=( const Ice& lhs );

		AMateria* clone( void ) const;
		void use( ICharacter& target );
};

#endif
