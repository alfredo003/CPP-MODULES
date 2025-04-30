#include "FragTrap.hpp"


FragTrap::FragTrap():ClapTrap()
{
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = fragTrap;
}

FragTrap& FragTrap::operator=(const FragTrap &fragTrap)
{
	std::cout  << "FragTrap copy assignment operator called" << std::endl;
	if(this != &fragTrap)
	{
		this->name = fragTrap.name;
		this->hit_points = fragTrap.hit_points;
		this->energy_points = fragTrap.energy_points;
		this->attack_damage = fragTrap.attack_damage;
	}
	return *this;
}

void FragTrap::attack(const std::string& target)
{
	if (this->hit_points > 0 && this->energy_points > 0) {
		this->energy_points--;
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	} else {
		std::cout << "FragTrap " << this->name << " has no energy or no health to attack!" << std::endl;
	}
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " requests a positive high five!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}
