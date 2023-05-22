#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->name = this->getName();
    this->HP = 100;
    this->EP = 50;
    this->ATK = 20;
	
    this->setATK(this->ATK);
	this->setHP(this->HP);
	this->setEP(this->EP);
	this->setName(this->name);
    std::cout<<this->name<< " Constructor called scavtrap created"<< std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    this->HP = 100;
    this->EP = 50;
    this->ATK = 20;

	this->setATK(this->ATK);
	this->setHP(this->HP);
	this->setEP(this->EP);
	this->setName(this->name);

    std::cout<<this->name<< " Constructor with name parameter called scavtrap created"<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& claptrap) : ClapTrap(claptrap)
{
    *this = claptrap;
    std::cout<<this->name<< " Copy created"<<std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout<< "Destructor called"<<std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& claptrap)
{
	this->name = claptrap.name;
	this->ATK = claptrap.ATK;
	this->HP = claptrap.HP;
	this->EP = claptrap.EP;

    std::cout<<"Operator = called"<<std::endl;
	return *(this);
}

void ScavTrap::attack(const std::string &target)
{
    if(this->HP == 0)
        return ;
    else if(this->EP > 1)
    {
        std::cout<< "[ScavTrap] "<<this->name<<" Attacks "<<target<<" causing "<<
         this->ATK<<" points of damage!"<<std::endl;
        this->EP--;
        return ;
    }
    std::cout<<this->name<<" can't attack, he has 0 Energy points left"<<std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout<<"[ScavTrap] "<< this->name << "Is in mazzocchi mode"<<std::endl;
}
