#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

# include <string>

class Zombie {
	public:
		Zombie( std::string name );
		~Zombie();

		void	announce();
	private:
		std::string _name;
};

#endif
