#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
    private:
        static const int _nbr_bits = 8;
        int _value;

    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed &operator = (const Fixed &copy);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif
