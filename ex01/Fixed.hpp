#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>


class Fixed
{
private:
	int					m_value;
	static const int	m_bits = 8;
public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed(const int value);
	Fixed(const float value);
	Fixed& operator=(const Fixed &other);
	~Fixed();
	int 	getRawBits( void );
	void 	setRawBits( int const raw );
	float 	toFloat( void ) const;
	int 	toInt( void ) const;

};

void    		ft_print(std::string text);
std::ostream& 	operator<<(std::ostream &os, const Fixed &other);

#endif
