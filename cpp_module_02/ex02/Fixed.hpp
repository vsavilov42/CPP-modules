#ifndef FIXED_HPP_
# define FIXED_HPP_

class Fixed {
	public:
		Fixed();
		Fixed( const int n );
		Fixed( const float n );
		~Fixed();
		Fixed( const Fixed& copy );

		//Assignment
		Fixed &operator=( const Fixed& lhs );

		//Relational
		bool operator==( const Fixed& lhs ) const;
		bool operator!=( const Fixed& lhs ) const;
		bool operator>( const Fixed& lhs ) const;
		bool operator<( const Fixed& lhs ) const;
		bool operator>=( const Fixed& lhs ) const;
		bool operator<=( const Fixed& lhs ) const;

		//Binary arithmetic
		Fixed operator+( const Fixed& lhs ) const;
		Fixed operator-( const Fixed& lhs ) const;
		Fixed operator*( const Fixed& lhs ) const;
		Fixed operator/( const Fixed& lhs ) const;

		//Unary arithmetic
		Fixed &operator++();
		Fixed &operator--();

		Fixed operator++(int);
		Fixed operator--(int);

		static const Fixed& min(const Fixed& f1, const Fixed& f2);
		static const Fixed& max(const Fixed& f1, const Fixed& f2);

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
