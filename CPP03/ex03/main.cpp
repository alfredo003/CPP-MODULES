#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap achivela("Achivela");

	achivela.attack("Enemy");
	achivela.takeDamage(10);
	achivela.beRepaired(30);
	achivela.guardGate();
	achivela.highFivesGuys();
	achivela.whoAmI();
	
	return (0);
}