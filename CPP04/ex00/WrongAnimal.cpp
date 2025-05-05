#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("")
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal desctructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : type(type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &copy ) : type(copy.type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}
	
WrongAnimal	&WrongAnimal::operator=( WrongAnimal const &copy )
{
	if (this != &copy)
	{
		type = copy.type;
	}
	std::cout << "WrongAnimal copy operator assignment called" << std::endl;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (type);
}

void		WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal Silence..." << std::endl;
}