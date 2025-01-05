#include "header.hpp"
#include <iostream>
bool ft_is_on_segment(const Point &seg_start, const Point &seg_end, const Point &pt);

int main( void ) {
	Point a(0, 0);
	Point b(4, 0);
	Point c(4, 4);
	Point p1(3.5, 1);
	Point p2(10, 0.2);

	std::cout << "P1 : " << std::flush;
	if (bsp(a, b, c, p1))
		std::cout << "INTERIEUR!" << std::endl;
	else
		std::cout << "EXTERIEUR!" << std::endl;

	std::cout << "P2 : " << std::flush;
	if (bsp(a, b, c, p2))
		std::cout << "INTERIEUR!" << std::endl;
	else
		std::cout << "EXTERIEUR!" << std::endl;
	return 0;
}