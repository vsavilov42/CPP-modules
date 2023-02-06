#ifndef FIXED_HPP_
# define FIXED_HPP_

class Fixed {
	public:
		Fixed( void );
		Fixed( const int n );
		Fixed( const float n );
		~Fixed( void );
		Fixed( const Fixed& copy );
		Fixed &operator=( const Fixed& lhs );
		
		int	getRawBits( void ) const;
		int	setRawBits( int const raw );

		float	toFloat( void ) const;
		int	toInt( void ) const;
	private:
		static const int	_numBits = 8;
		int			_bits;
};

std::ostream &operator<<( std::ostream& os, const Fixed& lhs );

#endif
