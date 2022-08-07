#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

# include <string>

class Zombie {
	public:
		Zombie();
		~Zombie();
		Zombie( std::string name );

		void	announce( void );
		void	zombieName( std::string name );
	private:
		std::string _name;
};

#endif
