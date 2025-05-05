#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() 
{
	{
		std::cout << "[\033[31m TEST CREATING DOG AND CAT  \033[0m] " << std::endl;
		const Animal* dog = new Dog();
			std::cout << "\033[31m ----------------------- \033[0m " << std::endl;
		const Animal* cat = new Cat();
		
		std::cout << "[\033[31m DELETING DOG AND CAT  \033[0m] " << std::endl;
		delete dog;
			std::cout << "\033[31m ----------------------- \033[0m " << std::endl;
		delete cat;
	}

	{
		const Animal* animalArray[10];

		std::cout << "[\033[31m TEST CREATING 5 DOG  \033[0m] " << std::endl;
		for (int i = 0; i < 5; i++) {
			animalArray[i] = new Dog();
			std::cout << std::endl;
		}

		std::cout << "[\033[31m TEST CREATING 5 CAT  \033[0m] " << std::endl;
		for (int i = 5; i < 10; i++) {
			animalArray[i] = new Cat();
			std::cout << std::endl;
		}

		std::cout << "[\033[31m DELETING ALL ANIMALS \033[0m] " << std::endl;
		for (int i = 0; i < 10; i++) {
			delete animalArray[i];
			std::cout << std::endl;
		}
	}

	{	
		std::cout << "[\033[31m TEST CREATING DOG BASIC \033[0m] " << std::endl;
		Dog basic;

		std::cout << "[\033[31m COPYING DOG BASIC INTO TMP \033[0m] " << std::endl;
		{
			Dog tmp = basic;
		}

	}

	return 0;
}
