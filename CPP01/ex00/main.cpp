#include "Zombie.hpp"

int	main(void)
{
	std::cout << "Stack-Zombies" << std::endl;
	Zombie	zombie1("Zombie1");
	Zombie	zombie2("Zombie2");

	zombie1.announce();
	zombie2.announce();
	randomChump("randomChumpZ");

	std::cout << std::endl;
	std::cout << "Heap-Zombies" << std::endl;
	Zombie	*heapZ;

	heapZ = newZombie("HeapZ");
	heapZ->announce();
	delete(heapZ);

	return (0);
}