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

Fixed &Fixed::operator=(const Fixed &other)
{
    ft_print("Copy assignment operator called");
    if (this != &other)
        m_value = other.m_value;
    return *this;
}

int Fixed::getRawBits( void ) const
{
    ft_print("getRawBits member function called");
    return (m_value);
}

void Fixed::setRawBits( const int &raw )
{
    ft_print("setRawBits member function called");
    m_value = raw;
}

Fixed::~Fixed()
{
    ft_print("Destructor called");
}