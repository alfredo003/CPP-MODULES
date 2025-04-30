#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap " << name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap():name(""),hit_points(10),energy_points(10),attack_damage(10)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << "ClapTrap Copy constructor called" << std::endl;	
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy Assignment constructor called" << std::endl;
	if(this != &copy)
	{
		this->name = copy.name;
		this->hit_points = copy.hit_points;
		this->energy_points = copy.energy_points;
		this->attack_damage = copy.attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hit_points > 0 && this->energy_points > 0) {
		this->energy_points--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	} else {
		std::cout << "ClapTrap " << this->name << " has no energy or no health to attack!" << std::endl;
	}
}



void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->hit_points < amount)
		this->hit_points = 0;
	else
		this->hit_points -= amount;
	std::cout << "ClapTrap " << this->name << " was damaged by " << amount << ". Now has "<< this->hit_points << " Hit points left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead. Could not be repaired" << std::endl;
	}
	else if (this->energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " has no energy points left. Could not be repaired" << std::endl;
		return ;
	}else
	{
		this->hit_points += amount;
		this->energy_points -= 1;
		std::cout << "ClapTrap " << this->name <<  " repaired " << amount << " of Hit Points. Now has " << this->hit_points << " Hit points left" << std::endl;
		std::cout << "1 energy point spent on repairing. Now has " << this->energy_points << " left" << std::endl;
	}
}
