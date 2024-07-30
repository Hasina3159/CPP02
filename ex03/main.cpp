#include "header.hpp"
#include <iostream>

int main( void ) {
	Point a(0, 0);
	Point b(4, 0);
	Point c(2, 4);
	Point p(5, 5);
	if (bsp(a, b, c, p))
		std::cout << "INTERIEUR!" << std::endl;
	else
		std::cout << "EXERIEUR!" << std::endl;
	return 0;
}