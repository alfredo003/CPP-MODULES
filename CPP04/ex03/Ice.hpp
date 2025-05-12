#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "AMateria.hpp"

class	Ice : public AMateria {

    public:
		Ice();
		Ice(const Ice &copy);
		~Ice();
		Ice &operator=(const Ice &copy);
		
		Ice* clone() const;
		void use(ICharacter& target);
};

#endif
