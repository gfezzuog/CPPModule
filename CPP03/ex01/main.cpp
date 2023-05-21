#include "ScavTrap.hpp"

int main(void)
{
	std::string buf;
	ClapTrap player("Jeffry Bezos");
	ScavTrap player2("POPI");

	std::cout<< "ATK: " << player.getATK();
	std::cout<< " EP: " << player.getEnergyPoints();
	std::cout<< " HP: " << player.getHitPoints()<<std::endl;
	
	std::cout<< "ATK: " << player2.getATK();
	std::cout<< " EP: " << player2.getEnergyPoints();
	std::cout<< " HP: " << player2.getHitPoints()<<std::endl;
	
	player2.attack("Banani");
	player2.takeDamage(2);
	player2.guardGate();

	player.attack("Banani");
	player.takeDamage(2);
	player.beRepaired(5);
	return 0;
}