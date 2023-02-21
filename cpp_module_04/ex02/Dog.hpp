#ifndef DOG_HPP_
# define DOG_HPP_

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog( void );
		~Dog( void );
		Dog( const Dog& copy );
		Dog &operator=( const Dog& lhs );

		void	makeSound( void ) const;
		Brain*	getBrain( void ) const;
	private:
		Brain* _brain;
};

#endif
