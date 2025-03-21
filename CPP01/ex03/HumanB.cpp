#include "HumanB.hpp"

HumanB::HumanB(std::string name) : weapon(NULL), name(name)
{
	std::cout << "Default HumanB constructor called" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB destructor called" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack(void)
{
	if (!this->weapon)
		std::cout << "NO WEAPON";
	else
		std::cout << this->name << " attacked with " << this->weapon->getType() << std::endl;
	return ;
}
