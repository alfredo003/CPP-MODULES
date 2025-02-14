#include "Zombie.hpp"

int		main(void)
{
	std::cout << "Zombie" << std::endl;
	Zombie  zombyFather = Zombie("zombyFather");
	std::cout << "----------------------" << std::endl;
	std::cout << "newZombie" << std::endl;
	Zombie  *zomb1 = newZombie("Zombie 1");
	delete zomb1;
	Zombie  *zomb2 = newZombie("Zombie 2");
	delete zomb2;
	std::cout << "----------------------" << std::endl;

	std::cout << "RandomChump" << std::endl;
	randomChump("randomZomb");
}