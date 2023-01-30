#ifndef CLAPTRAP_HPP_
# define CLAPTRAP_HPP_

# include <string>

class ClapTrap {
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		~ClapTrap( void );
		ClapTrap( const ClapTrap& copy );
		ClapTrap &operator=( const ClapTrap& lhs );

		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
	private:
		std::string	_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif
