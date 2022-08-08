#ifndef HUMANA_HPP_
# define HUMANA_HPP_

# include "Weapon.hpp"
# include <string>

class HumanA {
	public:
		HumanA( std::string name, Weapon &weapon);
		~HumanA();

		void	atack() const;
	private:
		std::string	_name;
		Weapon		&_weapon;
};

#endif
