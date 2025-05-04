#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() 
{
	{
		std::cout << "[TEST] Creating Dog and Cat with Animal*..." << std::endl;
		const Animal* dogPtr = new Dog();
		std::cout << std::endl;

		const Animal* catPtr = new Cat();
		std::cout << std::endl;

		std::cout << "[TEST] Deleting Dog and Cat (checking for leaks)..." << std::endl;
		delete dogPtr;
		std::cout << std::endl;
		delete catPtr;
		std::cout << std::endl;
	}

	{
		const Animal* animalArray[20];

		std::cout << "[TEST] Creating 10 Dogs..." << std::endl;
		for (int i = 0; i < 10; i++) {
			animalArray[i] = new Dog();
			std::cout << std::endl;
		}

		std::cout << "[TEST] Creating 10 Cats..." << std::endl;
		for (int i = 10; i < 20; i++) {
			animalArray[i] = new Cat();
			std::cout << std::endl;
		}

		std::cout << "[TEST] Deleting all Animals (Dogs and Cats)..." << std::endl;
		for (int i = 0; i < 20; i++) {
			delete animalArray[i];
			std::cout << std::endl;
		}
	}

	{
		std::cout << "[TEST] Creating Dog 'basic'..." << std::endl;
		Dog basic;

		std::cout << "[TEST] Copying Dog 'basic' into 'tmp'..." << std::endl;
		{
			Dog tmp = basic;
		}
		std::cout << "[TEST] 'tmp' is now out of scope and destroyed." << std::endl;
	}

	return 0;
}
