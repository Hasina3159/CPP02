#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	Fixed x;
	Fixed y;
public:
	Point();
	Point(float m_x, float m_y);
	Point(Point &other);
	~Point();
	Point &operator=(Point &other);
	Fixed get_x() const;
	Fixed get_y() const;
};

#endif