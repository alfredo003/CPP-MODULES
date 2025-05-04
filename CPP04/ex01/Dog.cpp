#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), DogBrain(new Brain())
{
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog::~Dog()
{
	delete DogBrain;
	std::cout << "Dog desctructor called" << std::endl;
}

Dog::Dog(Dog const &copy) : Animal(copy.type)
{
	this->DogBrain = new Brain(*copy.DogBrain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &copy)
{
	std::cout << "Dog copy operator assignment called" << std::endl;
	if (this != &copy)
	{
		type = copy.type;
		DogBrain = copy.DogBrain;
	}
	return (*this);
}
	
void	Dog::makeSound(void) const
{
	std::cout << "Auo.. Auo..." << std::endl;
}