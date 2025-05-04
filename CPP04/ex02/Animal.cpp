#include "Animal.hpp"

Animal::Animal() : type("")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "Animal desctructor called" << std::endl;
	return ;
}

Animal::Animal(Animal const &copy) : type(copy.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal const &Animal::operator=(Animal const &copy)
{
	std::cout << "Animal copy operator assignment called" << std::endl;
	if (this != &copy)
	{
		type = copy.type;
	}
	return (*this);
}

std::string		Animal::getType() const
{
	return(this->type);
}