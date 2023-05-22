
#include "DiamondTrap.hpp"

int main(void)
{
	std::string buf;
	ClapTrap player("Jeffry Bezos");
	ScavTrap player2("POPI");
	FragTrap player3("DIO");
	DiamondTrap player4("DIAMONDO");

	std::cout<< "ATK: " << player.getATK();
	std::cout<< " EP: " << player.getEnergyPoints();
	std::cout<< " HP: " << player.getHitPoints()<<std::endl;
	
	std::cout<< "ATK: " << player2.getATK();
	std::cout<< " EP: " << player2.getEnergyPoints();
	std::cout<< " HP: " << player2.getHitPoints()<<std::endl;
	
	std::cout<< "ATK: " << player3.getATK();
	std::cout<< " EP: " << player3.getEnergyPoints();
	std::cout<< " HP: " << player3.getHitPoints()<<std::endl;
	
	std::cout<< "ATK: " << player4.getATK();
	std::cout<< " EP: " << player4.getEnergyPoints();
	std::cout<< " HP: " << player4.getHitPoints()<<std::endl;
	
	player4.attack("Banani");
	player4.takeDamage(4);
	player4.highFiveGuys();

	player4.attack("Banani");
	player4.takeDamage(4);
	player4.highFiveGuys();
	player4.announce();


	player2.attack("Banani");
	player2.takeDamage(2);
	player2.guardGate();

	player.attack("Banani");
	player.takeDamage(2);
	player.beRepaired(5);
	return 0;
}