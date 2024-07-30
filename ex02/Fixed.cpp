#include "Fixed.hpp"

void    ft_print(std::string text)
{
    std::cout << text << std::endl;
}

Fixed::Fixed() : m_value(0)
{
    ft_print("Default constructor called");
}

Fixed::Fixed(const Fixed &other) : m_value(other.m_value)
{
    ft_print("Copy constructor called");
}

Fixed::Fixed(const int value)
{
    m_value = (value * (1 << m_bits));
}
Fixed::Fixed(const float value)
{
    m_value = static_cast<int>(roundf(value * (1 << m_bits)));
}

Fixed &Fixed::operator=(const Fixed &other)
{
    ft_print("Copy assignment operator called");
    if (this != &other)
        m_value = other.m_value;
    return *this;
}

int Fixed::getRawBits( void )
{
    ft_print("getRawBits member function called");
    return (m_value);
}

void Fixed::setRawBits( int const raw )
{
    ft_print("setRawBits member function called");
    m_value = raw;
}

Fixed::~Fixed()
{
    ft_print("Destructor called");
}

float Fixed::toFloat( void ) const
{
    return (static_cast<float> (m_value) / (1 << m_bits));
}

int Fixed::toInt( void ) const
{
    return (m_value / (1 << m_bits));
}

std::ostream& operator<<(std::ostream &os, const Fixed &fixed)
{
    os << fixed.toFloat();
    return (os);
}

bool Fixed::operator==(const Fixed &other) const
{
    return (m_value == other.m_value);
}

bool Fixed::operator>=(const Fixed &other) const
{
    return (m_value >= other.m_value);
}

bool Fixed::operator<=(const Fixed &other) const
{
    return (m_value <= other.m_value);
}

bool Fixed::operator!=(const Fixed &other) const
{
    return (m_value != other.m_value);
}

bool Fixed::operator>(const Fixed &other) const
{
    return (m_value > other.m_value);
}

bool Fixed::operator<(const Fixed &other) const
{
    return (m_value < other.m_value);
}

float	Fixed::operator*(const Fixed &other) const
{
    return (toFloat() * other.toFloat());
}

float	Fixed::operator/(const Fixed &other) const
{
    return (toFloat() / other.toFloat());
}

float	Fixed::operator+(const Fixed &other) const
{
    return (toFloat() + other.toFloat());
}

float	Fixed::operator-(const Fixed &other) const
{
    return (toFloat() - other.toFloat());
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
    return ((a.m_value < b.m_value) ? a : b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    return ((a.m_value < b.m_value) ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
    return ((a.m_value > b.m_value) ? a : b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    return ((a.m_value > b.m_value) ? a : b);
}
