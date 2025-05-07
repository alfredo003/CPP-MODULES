#include "AMateria.hpp"

AMateria::AMateria() : type("")
{
	std::cout << "AMateria Default constructor called" << std::endl;
} 
 
AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy) : type(copy.type)
{
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
	if (this != &copy)
	{
		type = copy.type;
	}
	return (*this);
}

void	AMateria::setType(std::string type)
{
	this->type = type;
}

std::string const& AMateria::getType() const
{
	return (this->type);
}
 
void AMateria::use(ICharacter& target)
{
	std::cout << type << " used on " << target.getName() << std::endl;
	
}