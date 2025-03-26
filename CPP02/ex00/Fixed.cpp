#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	*this =copy;
    	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	if (this != &copy)
		this->_value = copy.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" <<  std::endl;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}
