#include "Fixed.hpp"

Fixed::Fixed():nbr_fixed(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{ 
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        nbr_fixed = fixed.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
     std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->nbr_fixed;
}

void Fixed::setRawBits( int const raw )
{
    std::cout << " setRawBits member function called" << std::endl;
    this->nbr_fixed = raw;
}