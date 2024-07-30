#include "Point.hpp"

Fixed	ft_area(Point const &a, Point const &b, Point const &c)
{
	Fixed	x1;
	Fixed	y1;
	Fixed	x2;
	Fixed	y2;
	Fixed	x3;
	Fixed	y3;
	Fixed	final;

	x1 = a.get_x().toFloat();
	y1 = a.get_y().toFloat();
	x2 = b.get_x().toFloat();
	y2 = b.get_y().toFloat();
	x3 = c.get_x().toFloat();
	y3 = c.get_y().toFloat();
	final = Fixed(std::abs(((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1
							- y2))) / 2));
	return (final);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed abc = Fixed(ft_area(a, b, c));
	Fixed pab = Fixed(ft_area(point, a, b));
	Fixed pbc = Fixed(ft_area(point, b, c));
	Fixed pac = Fixed(ft_area(point, a, c));
	if (abc == ((pab + pbc + pbc)))
		return (true);
	return (false);
}