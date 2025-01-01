#include "header.hpp"
#include <iostream>

int main( void ) {
	Point a(0, 0);
	Point b(4, 0);
	Point c(2, 4);
	Point p1(5, 5);
	Point p2(1, 0.2);

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