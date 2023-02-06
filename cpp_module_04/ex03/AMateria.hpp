#ifndef AMATERIA_HPP_
# define AMATERIA_HPP_

# include "ICharacter.hpp"

# include <string>

class ICharacter;

class AMateria {
	public:
		AMateria( const std::string& type );
		virtual ~AMateria( void );

		const std::string&	getType( void ) const;

		virtual	AMateria* clone( void ) const = 0;
		virtual void	use( ICharacter& target );
	protected:
		std::string _type;
	private:
		AMateria( void );
};

#endif
