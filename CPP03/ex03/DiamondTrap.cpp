#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():name("")
{
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap default constructor was called" << std::endl;
}


DiamondTrap::DiamondTrap(std::string const &name)
{
	this->name = name;
	ClapTrap::name =  name + "_clap_name";
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	*this = copy;
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap&copy)
{
	std::cout << "DiamondTrap copy assignment constructor called" << std::endl;
	if(this != &copy)
	{
		ClapTrap::name=  copy.name + "_clap_name";
		this->name = copy.name;
		this->hit_points = copy.FragTrap::hit_points;
		this->energy_points = copy.ScavTrap::energy_points;
		this->attack_damage = copy.FragTrap::attack_damage;
	}
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->name << "; ClapTrap name: " << ClapTrap::name << ";" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
