#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>


class Dog: public Animal {

private:
	Brain *DogBrain;
protected:
	std::string	type;
public:
	Dog();
	~Dog();

	Dog(Dog const &copy);
	Dog &operator=(Dog const &copy);
	
	void	makeSound(void) const;
};

#endif