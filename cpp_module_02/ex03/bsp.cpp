#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

Fixed sign( const Point p1, const Point p2, const Point p3) {
	return (p3.getY() - p2.getY()) * (p1.getX() - p2.getX())
		+ ((p3.getX() * -1) + p2.getX()) * (p1.getY() - p2.getY());
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	bool v1, v2, v3;

	v1 = sign( point, a, b ) > 0;
	v2 = sign( point, b, c ) > 0;
	v3 = sign( point, c, a ) > 0;

	return v1 && v2 && v3;
}
