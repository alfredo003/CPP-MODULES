#include "Fixed.hpp"

Fixed::Fixed():nbr_fixed(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed&fixed)
{
    *this = fixed;
    std::cout << "Copy constructor called" << std::endl;
}
Fixed& Fixed::operator=(const Fixed&fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &fixed)
        nbr_fixed = fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    return this->nbr_fixed;
}
void Fixed::setRawBits( int const raw )
{
    this->nbr_fixed = raw;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int nbr)
{
     this->nbr_fixed = nbr << this->nbr_fra_bits;
     std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nbr_float)
{
    this->nbr_fixed = (int)roundf(nbr_float * (1 << this->nbr_fra_bits));
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
    return (float)(this->nbr_fixed) / (1 << this->nbr_fra_bits); 
}
int Fixed::toInt(void) const
{
    return this->nbr_fixed >> this->nbr_fra_bits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}