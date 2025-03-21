#include "Harl.hpp"

void Harl::complain(std::string level)
{
	void (Harl::*PComplain[4])() = {
		&Harl::debug,
		&Harl::info, 
		&Harl::warning, 
		&Harl::error
	};

	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int  i = -1;
	while(i++ < 4)
	{
		if(level == levels[i])
		{
			(this->*PComplain[i])();
			break;
		}
	}
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl  << std::endl;;
	return ;
}

void Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl  << std::endl;;
	return ;
}
void Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl  << std::endl;;
	return ;
}
void Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable!" << std::endl;
	std::cout << "I want to speak to the manager now." << std::endl;
	return ;
}