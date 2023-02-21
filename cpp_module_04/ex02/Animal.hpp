#ifndef ANIMAL_HPP_
# define ANIMAL_HPP_

# include <string>

class Animal {
	public:
		virtual ~Animal( void );
		Animal &operator=( const Animal& lhs );

		virtual void	makeSound( void ) const;
		const	std::string& getType( void ) const;
	protected:
		std::string	_type;
		Animal( void );
		Animal( const Animal& copy );
};

#endif
