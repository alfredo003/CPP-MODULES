#include "ClapTrap.hpp"

int main() {
	ClapTrap clappy("Clappy");
 
	clappy.attack("Enemy");
	clappy.takeDamage(5);
	clappy.beRepaired(3);

	clappy.attack("Enemy");
	return 0;
} 
