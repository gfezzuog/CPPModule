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
	
	ClapTrap& operator=(const ClapTrap &claptrap);
};
