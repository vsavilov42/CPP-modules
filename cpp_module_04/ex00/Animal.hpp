#ifndef ANIMAL_HPP_
# define ANIMAL_HPP_

# include <string>

class Animal {
	public:
		Animal( void );
		virtual ~Animal( void );
		Animal( const Animal& copy );
		Animal &operator=( const Animal& lhs );

		virtual void	makeSound( void ) const;
		const	std::string& getType( void ) const;
	protected:
		std::string	_type;
};

#endif
