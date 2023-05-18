#include "ClapTrap.hpp"

int main(void)
{
	std::string buf;
	ClapTrap player("Jeffry Bezos");

	std::cout<< "ATK: " << player.getATK();
	std::cout<< " EP: " << player.getEnergyPoints();
	std::cout<< " HP: " << player.getHitPoints()<<std::endl;
	player.attack("Banani");
	player.takeDamage(2);
	player.beRepaired(5);
	return 0;
}