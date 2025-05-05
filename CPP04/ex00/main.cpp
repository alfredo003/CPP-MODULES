#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
 
int main()
{
	std::cout << "[\033[31m TEST DEFAULT \033[0m] " << std::endl;
	{
		const Animal* meta = new Animal();

		std::cout << "\033[31m ----------------------- \033[0m " << std::endl;
		const Animal* i = new Cat();
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();

		std::cout << "\033[31m ----------------------- \033[0m " << std::endl;
		const Animal* j = new Dog();
		std::cout << j->getType() << " " << std::endl;
		j->makeSound();

		std::cout << "\033[31m ----------------------- \033[0m " << std::endl;
		meta->makeSound();
	}

	std::cout << "[\033[31m TEST ADDITIONAL \033[0m] " << std::endl;
	{
		const WrongAnimal* animal = new WrongAnimal();
		const WrongAnimal* cat = new WrongCat();
		std::cout << cat->getType() << " " << std::endl;
		cat->makeSound();
	}

	return 0;
}