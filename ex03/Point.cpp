#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(float m_x, float m_y) : x(m_x), y(m_y) {}

Point::Point(Point &other) : x(other.x), y(other.y) {}

Point::~Point() {}

Point &Point::operator=(Point &other)
{
	if (this != &other)
	{
		x = other.x;
		y = other.y;
	}
	return (*this);
}

Fixed Point::get_x() const
{
	return (x);
}

Fixed Point::get_y() const
{
	return (y);
}
