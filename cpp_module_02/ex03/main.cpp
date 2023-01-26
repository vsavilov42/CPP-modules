#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point );

int main() {
	Point a(0, 0);
	Point b(20, 0);
	Point c(10, 30);
	Point p(10, 15);

	if (bsp(a, b, c, p))
		std::cout << "nice" << std::endl;
	else
		std::cout << "sadtimes" << std::endl;
	return 0;
}

//static_cast<>
//dynamic_cast<>
