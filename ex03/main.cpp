#include "header.hpp"
#include <iostream>
bool ft_is_on_segment(const Point &seg_start, const Point &seg_end, const Point &pt);

int main( void ) {
	Point a(0, 0);
	Point b(4, 0);
	Point c(4, 4);
	Point p1(4, 4);
	Point p2(4, 0);

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

	if (ft_is_on_segment(a, b, p1))
		std::cout << "> ON_SEG!" << std::endl;
	else
		std::cout << "> NOT_ON_SEG!" << std::endl;
	return 0;
}