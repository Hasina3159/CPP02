#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
private:
	int					m_value;
	static const int	m_bits = 8;
public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed& operator=(const Fixed &other);
	~Fixed();
	int getRawBits( void );
	void setRawBits( int const raw );
};

void    ft_print(std::string text);

#endif
