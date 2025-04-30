#include "FragTrap.hpp"

int main() {
	FragTrap bot("Alfredo");
	
	
	bot.attack("Achivela");
	bot.takeDamage(5);
	bot.beRepaired(3);

	bot.highFivesGuys();
	return 0;
}
