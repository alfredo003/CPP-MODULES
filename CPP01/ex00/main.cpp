#include "Zombie.hpp"

int main(void)
{
    Zombie* z1 = newZombie("Foo");
    z1->announce();
    
    randomChump("Bar");
    
    delete z1;
	
    return 0;
}