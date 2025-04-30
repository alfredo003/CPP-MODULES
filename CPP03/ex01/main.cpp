#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ScavTrap bot("achivela");

    bot.attack("Enemy");
    bot.takeDamage(30);
    bot.beRepaired(20);

    bot.attack("Enemy");
    bot.guardGate();

	return 0;
}
