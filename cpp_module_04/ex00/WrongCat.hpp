#ifndef WRONGCAT_HPP_
# define WRONGCAT_HPP_

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat( void );
		~WrongCat( void );
		WrongCat( const WrongCat& copy );

		void makeSound( void ) const;
};

#endif
