#ifndef FIXED_HPP
#define FIXED_HPP
# include <iostream>
#include <cmath>

class Fixed
{
private:
    int nbr_fixed;
    const int nbr_fra_bits = 8;
public:

    Fixed();
    Fixed(const Fixed&fixed);
    Fixed&operator=(const Fixed&fixed);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    ~Fixed();

    Fixed(const int nbr);
    Fixed(const float nbr_float);
    float toFloat(void) const;
    int toInt(void) const;
    friend std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
};

#endif
