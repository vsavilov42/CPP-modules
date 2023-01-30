#ifndef FRAGTRAP_HPP_
# define FRAGTRAP_HPP_

#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap( void );
		~FragTrap( void );
		FragTrap( std::string name );
		FragTrap( const FragTrap& copy );

		FragTrap& operator=( const FragTrap& lhs );

		void highFivesGuys( void );
};

#endif
