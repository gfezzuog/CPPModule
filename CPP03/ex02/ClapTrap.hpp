#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		unsigned int HP;
		unsigned int EP;
		unsigned int ATK;

	public:
		ClapTrap();
		ClapTrap(const ClapTrap &claptrap);
		ClapTrap(std::string name);
		~ClapTrap();

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName();
	int getHitPoints();
	int getEnergyPoints();
	int	getATK();
	void setEP(unsigned int EP);
	void setHP(unsigned int HP);
	void setATK(unsigned int ATK);
	void setName(std::string name);
	
	ClapTrap& operator=(const ClapTrap &claptrap);
};

#endif