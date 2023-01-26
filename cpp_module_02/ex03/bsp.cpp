#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

Fixed area( const Point p1, const Point p2, const Point p3) {
	return (p1.getX() * (p2.getY() - p3.getY())
		+ p2.getX() * (p3.getY() - p1.getY())
		+ p3.getX() * (p1.getY() - p2.getY()) / 2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed tArea, a1, a2, a3;
	(void)point;
	tArea = area(a, b, c);
	a1 = area(point, b, c);
	a2 = area(a, point, c);
	a1 = area(a, b, point);

	//std::cout << "tArea: " << tArea.getRawBits() << std::endl;
	//std::cout << "a1 Area: " << a1.getRawBits() << std::endl;
	//std::cout << "a2 Area: " << a2.getRawBits() << std::endl;
	//std::cout << "a3 Area: " << a3.getRawBits() << std::endl;
	return (tArea == a1 + a2 + a3);
}
