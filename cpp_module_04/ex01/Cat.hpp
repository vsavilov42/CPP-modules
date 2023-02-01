#ifndef CAT_HPP_
# define CAT_HPP_

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat( void );
		~Cat( void );
		Cat( const Cat& copy );
		Cat &operator=( const Cat& lhs );

		void makeSound( void ) const;
		Brain* getBrain( void ) const;
	private:
		Brain* _brain;
};

#endif
