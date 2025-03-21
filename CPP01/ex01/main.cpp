#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int N = 5;
	std::string name = "Zombie";

	horde = zombieHorde(N, name);
 	for (int i = 0; i < N; i++)
	{
       std::cout << "ID " << i << ": ";
	   horde[i].announce();
    }

	delete[] horde;
	return (0);
}