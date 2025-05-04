#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
#include "Brain.hpp"
# include <iostream>

class Cat: public Animal {

private:
	Brain *CatBrain;
public:
	Cat();
	~Cat();

	Cat(Cat const &copy);
	Cat &operator=(Cat const &copy);
	
	void	makeSound(void) const;
};

#endif