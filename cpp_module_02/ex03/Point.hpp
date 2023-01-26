#ifndef POINT_HPP_
# define POINT_HPP_

# include "Fixed.hpp"

class Point {
	public:
		Point( void );
		~Point( void );
		Point( const Point& copy );
		Point( const float x, const float y );
		Point( const Fixed x, const Fixed y );
		Point &operator=( const Point& lhs );

		Fixed getX( void ) const;
		Fixed getY( void ) const;

	private:
		const Fixed _X;
		const Fixed _Y;
};

std::ostream &operator<<( std::ostream& os, const Point& lhs);

#endif
