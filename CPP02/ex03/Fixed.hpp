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
    
    bool operator>(const Fixed &other) const;
    bool operator<(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator==(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;

    Fixed operator+(const Fixed &other) const;
    Fixed operator-(const Fixed &other) const;
    Fixed operator*(const Fixed &other) const;
    Fixed operator/(const Fixed &other) const;

    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);

    static Fixed& min(Fixed &a, Fixed &b);
    static const Fixed& min(const Fixed &a, const Fixed &b);
    static Fixed& max(Fixed &a, Fixed &b);
    static const Fixed& max(const Fixed &a, const Fixed &b);
    
    friend std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
};

#endif
