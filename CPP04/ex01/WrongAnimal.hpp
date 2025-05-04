#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

class WrongAnimal {

	protected:
		std::string	type;

	public:
		WrongAnimal( void );
		virtual ~WrongAnimal( void );

		WrongAnimal( std::string type );
		WrongAnimal( WrongAnimal const &copy );
		WrongAnimal	&operator=( WrongAnimal const &copy );
		
		std::string		getType() const;
		void		makeSound( void ) const;

};
#endif