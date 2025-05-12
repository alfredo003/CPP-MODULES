#include "Character.hpp"

Character::Character() :name("")
{
	num_inventory	= 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
	std::cout << "Character Default constructor called" << std::endl;
}

Character::Character(const std::string name) : name(name)
{
	num_inventory	= 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
	std::cout << "Character constructor called" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < num_inventory; i++)
	{
		if (this->inventory[i])
			delete (this->inventory[i]);
	}
	std::cout << "Character destructor called" << std::endl;
}
		
Character::Character(Character &copy)
{
	*this = copy;
	std::cout << "Character copy constuctor called" << std::endl;
}

Character &Character::operator=(Character &copy)
{
	std::cout << "Character copy assignment constuctor called" << std::endl;
	if (this != &copy)
	{
		this->num_inventory = copy.num_inventory;
		this->name = copy.name;
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
			{
				delete (this->inventory[i]);
				this->inventory[i] = nullptr;
			}
		}
		for (int i = 0; i < num_inventory; i++)
		{
				this->inventory[i] = copy.inventory[i]->clone();
				
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	if (num_inventory < 4 && m)
	{
		this->inventory[num_inventory] = m;
		num_inventory++;
	}
	else if (num_inventory == 4)
	{
		std::cout << "\033[31m Character already has 4 materia \033[0m" << std::endl;
		delete m;
	}
}

void Character::unequip(int idx)
{
	if (idx <= num_inventory && idx >= 0 && idx < 4)
	{
		this->inventory[idx] = nullptr;
	}
	else
		std::cout << "\033[31m No materia in this slot \033[0m" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx])
	{
		(this->inventory)[idx]->use(target);
	}
	else
		std::cout << "\033[31m No materia in this slot \033[0m" << std::endl;
}
