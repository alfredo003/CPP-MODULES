#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main() 
{

	std::cout << "[\033[31m TEST CREATING DOG AND CAT  \033[0m] " << std::endl;
	const Animal* j = new Dog(); 
	std::cout << j->getType() << std::endl;
	j->makeSound();
	
	std::cout << "\033[31m ----------------------- \033[0m " << std::endl;
	const Animal* i = new Cat();
	std::cout << i->getType() << std::endl;
	i->makeSound();
	
	std::cout << "[\033[31m DELETING ALL ANIMALS \033[0m] " << std::endl;
	delete j;
	delete i;
	
}
