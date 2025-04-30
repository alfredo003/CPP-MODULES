#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


ScavTrap::ScavTrap():ClapTrap()
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = scavTrap;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &scavTrap)
{
	std::cout  << "ScavTrap copy assignment operator called" << std::endl;
	if(this != &scavTrap)
	{
		this->name = scavTrap.name;
		this->hit_points = scavTrap.hit_points;
		this->energy_points = scavTrap.energy_points;
		this->attack_damage = scavTrap.attack_damage;
	}
	return *this;
}
void ScavTrap::attack(const std::string& target)
{
	if (this->hit_points > 0 && this->energy_points > 0) {
		this->energy_points--;
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	} else {
		std::cout << "ScavTrap " << this->name << " has no energy or no health to attack!" << std::endl;
	}
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScapTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now on Gate keeper mode" << std::endl;
}
