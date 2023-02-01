#ifndef CHICKEN_HPP_
# define CHICKEN_HPP_

# include "Animal.hpp"
# include "Brain.hpp"

class Chicken : public Animal{
	public:
		Chicken( void );
		~Chicken( void );
		Chicken( const Chicken& copy );
		Chicken& operator=( const Chicken& lhs );

		void makeSound( void ) const;
};

#endif
