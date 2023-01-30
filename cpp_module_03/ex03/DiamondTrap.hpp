#ifndef DIAMONDTRAP_HPP_
# define DIAMONDTRAP_HPP_

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap( void );
		~DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap& copy );

		DiamondTrap& operator=(const DiamondTrap& lhs );

		void whoAmI( void );
	private:
		std::string _name;
};

#endif
