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
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	m_value = (value << m_bits);
}
Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	m_value = static_cast<int>(roundf(value * (1 << m_bits)));
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		m_value = other.m_value;
	return (*this);
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
