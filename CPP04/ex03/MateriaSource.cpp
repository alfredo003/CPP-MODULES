#include "MateriaSource.hpp"	

MateriaSource::MateriaSource()
{
	num_materia = 0;
	for (int i = 0; i < 4; ++i)
	{
		materias[i] = nullptr;
	}
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		if (materias[i])
			delete materias[i];
	}
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy) : num_materia(copy.num_materia)
{
	 for (int i = 0; i < 4; ++i)
        materias[i] = copy.materias[i]->clone();
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	num_materia = copy.num_materia;
	if (this != &copy)
	{
		for (int i = 0; i < 4; ++i)
		{
			if (materias[i])
			{
				delete materias[i];
				materias[i] = nullptr;
			}
		}
		for (int i = 0; i < 4; ++i)
		{
			if (copy.materias[i])
				materias[i] = copy.materias[i]->clone();
			else
				materias[i] = nullptr;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (num_materia < 4)
	{
		materias[num_materia] = materia;
		num_materia++;
	}
	else
	{
		std::cout << "\033[31m MateriaSource is full \033[0m" << std::endl;
		 delete materia;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{

	for (int i = 0; i < num_materia; ++i)
	{
		if (materias[i] && materias[i]->getType() == type)
			return (materias[i]->clone());
	}
	return (0);
}
