#ifndef SCAVTRAP_HPP_
# define SCAVTRAP_HPP_

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap {
	public:
		ScavTrap( void );
		~ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap& copy );

		ScavTrap& operator=( const ScavTrap& lhs );

		void	guardGate( void );
};

#endif
