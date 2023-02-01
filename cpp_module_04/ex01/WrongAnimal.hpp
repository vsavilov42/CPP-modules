#ifndef WRONGANIMAL_HPP_
# define WRONGANIMAL_HPP_

#include <string>

class WrongAnimal {
	public:
		WrongAnimal( void );
		~WrongAnimal( void );
		WrongAnimal( const WrongAnimal& copy );
		WrongAnimal& operator=( const WrongAnimal& lhs );

		void	makeSound( void ) const;

		const std::string& getType( void ) const;
	protected:
		std::string _type;
};

#endif
