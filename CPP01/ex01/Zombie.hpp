#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>
#include <new>

class Zombie
{
    private:
        std::string     _name;
    public:
        Zombie(std::string name);
        void announce(void) const;
};
Zombie *zombieHorde(int N, std::string name);

#endif