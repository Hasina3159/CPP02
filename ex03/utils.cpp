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
	Point vec_a(seg_start.get_x() - pt.get_x(), seg_start.get_y() - pt.get_y());
	Point vec_b(pt.get_x() - seg_end.get_x(), pt.get_y() - seg_end.get_y());

	float coeff_a = 0;
	float coeff_b = 0;

	coeff_a = vec_a.get_x().toFloat() / vec_b.get_x().toFloat();
	coeff_b = vec_a.get_y().toFloat() / vec_b.get_y().toFloat();

	if (vec_b.get_x().toFloat() == 0)
		coeff_a = 0;
	if (vec_b.get_y().toFloat() == 0)
		coeff_a = 0;
	
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