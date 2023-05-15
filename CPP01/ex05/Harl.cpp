#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "his is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::complain(std::string level)
{
	msg[0] = &Harl::debug;
	msg[1] = &Harl::info;
	msg[2] = &Harl::warning;
	msg[3] = &Harl::error;
	int index;
	switch (level[0])
	{
		case 'D':
			index = 0;
			break;
		case 'I':
			index = 1;
			break;
		case 'W':
			index = 2;
			break;
		case 'E':
			index = 3;
			break;
		default:
			return;
	}
	(this->*msg[index])();
}