#ifndef HUMANB_HPP_
# define HUMANB_HPP_

# include "Weapon.hpp"
# include <string>

class HumanB {
	public:
		HumanB( std::string name );
		~HumanB();

		void	atack() const;
		void	setWeapon(const Weapon &weapon);
	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif
