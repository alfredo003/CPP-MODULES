#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#include "ICharacter.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int main()
{ 
    {
        std::cout << "[\033[31m CHARACTER ME  \033[0m] " << std::endl;
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());

        ICharacter* me = new Character("me");

        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);

        std::cout << "[\033[31m CHARACTER BOB  \033[0m] " << std::endl;
        ICharacter* bob = new Character("bob");

        me->use(0, *bob);
        me->use(1, *bob);

        delete bob;
        delete me;
        delete src;
    }

    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        ICharacter* me = new Character("me");
        AMateria* tmp;

         for (int i = 0; i < 8; ++i)
        {
            me->equip(src->createMateria("ice"));
        }
        tmp = src->createMateria("ice");
        
         delete tmp;
        delete me;
        delete src;
    }

    {
        IMateriaSource* src = new MateriaSource();
        
        
         for (int i = 0; i < 8; ++i)
        {
            src->learnMateria(new Ice());
        }
       
        delete src;
    }


    
    return 0;
}
