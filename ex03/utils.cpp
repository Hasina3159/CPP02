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
	final = Fixed(std::abs(((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2))) / 2));
	return (final);
}

bool ft_is_on_segment(const Point &seg_start, const Point &seg_end, const Point &pt)
{
	float x1 = seg_start.get_x().toFloat() - pt.get_x().toFloat();
	float x2 = pt.get_x().toFloat() - seg_end.get_x().toFloat();
	float y1 = seg_start.get_y().toFloat() - pt.get_y().toFloat();
	float y2 = pt.get_y().toFloat() - seg_end.get_y().toFloat();
	
	float coeff_a = 0;
	float coeff_b = 0;

	coeff_a = x1 / x2;
	coeff_b = y1 / y2;

	std::cout << "> coeaff_a : " << coeff_a << std::endl;
	std::cout << "> coeaff_b : " << coeff_b << std::endl;
	
	return (std::abs(coeff_a - coeff_b) < 0.00001);
}

bool ft_is_on_triangle(const Point &a, const Point &b, const Point &c, const Point &pt)
{
	return (ft_is_on_segment(a, b, pt) || ft_is_on_segment(a, c, pt) || ft_is_on_segment(b, c, pt));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed abc = Fixed(ft_area(a, b, c));
	Fixed pab = Fixed(ft_area(point, a, b));
	Fixed pbc = Fixed(ft_area(point, b, c));
	Fixed pac = Fixed(ft_area(point, a, c));
	return ((abc == (pab + pbc + pac)) && !ft_is_on_triangle(a, b, c, point));
}