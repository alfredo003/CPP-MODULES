#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
   this->_name;
}


void Zombie::announce(void) const
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
