#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::string buf;
	ClapTrap player("Jeffry Bezos");
	ScavTrap player2("POPI");
	FragTrap player3("DIO");	

	std::cout<< "ATK: " << player.getATK();
	std::cout<< " EP: " << player.getEnergyPoints();
	std::cout<< " HP: " << player.getHitPoints()<<std::endl;
	
	std::cout<< "ATK: " << player2.getATK();
	std::cout<< " EP: " << player2.getEnergyPoints();
	std::cout<< " HP: " << player2.getHitPoints()<<std::endl;
	
	std::cout<< "ATK: " << player3.getATK();
	std::cout<< " EP: " << player3.getEnergyPoints();
	std::cout<< " HP: " << player3.getHitPoints()<<std::endl;
	
	player3.attack("Banani");
	player3.takeDamage(3);
	player3.highFiveGuys();


	player2.attack("Banani");
	player2.takeDamage(2);
	player2.guardGate();

	player.attack("Banani");
	player.takeDamage(2);
	player.beRepaired(5);
	return 0;
}