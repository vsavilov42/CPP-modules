#ifndef CHARACTER_HPP_
# define CHARACTER_HPP_

# include <string>

# include "ICharacter.hpp"

class Character : public ICharacter {
	public:
		Character( const std::string& name );
		Character( const Character& copy );
		~Character( void );
		Character& operator=( const Character& lhs );

		const std::string& getName( void ) const;

		void equip( AMateria* m );
		void unequip( int idx );
		void use( int idx, ICharacter& target );
	private:
		Character();

		static const int maxInventory = 4;

		std::string _name;
		AMateria* _inventory[Character::maxInventory];
		int _nEquiped;
}; 

#endif
