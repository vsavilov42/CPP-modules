#ifndef FIXED_HPP_
# define FIXED_HPP_

class Fixed {
	public:
		Fixed();
		~Fixed();
		Fixed( const Fixed& copy );
		Fixed& operator=( const Fixed& lhs );
		
		int	getRawBits( void ) const;
		int	setRawBits( int const raw );
	private:
		static const int	_numBits = 8;
		int			_bits;
};

#endif
