#ifndef CLAPTRAP_HPP_
# define CLAPTRAP_HPP_

# include <string>

class ClapTrap {
	public:
		ClapTrap( void );
		virtual ~ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& copy );

		ClapTrap &operator=( const ClapTrap& lhs );

		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
	protected:
		std::string	_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif
