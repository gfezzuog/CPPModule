#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    this->name = "DiamondTrap";
    this->ClapTrap::setName(this->name + "_clap_name");
    this->HP = this->FragTrap::getHitPoints();
    this->EP = this->ScavTrap::getEnergyPoints();
    this->ATK = this->FragTrap::getATK();

    this->ClapTrap::setATK(this->ATK);
    this->ClapTrap::setHP(this->HP);
    this->ClapTrap::setEP(this->EP);

    std::cout<<this->name<<" Normal costructor called for Diamond"<<std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
    this->name = name;
    this->ClapTrap::setName(this->name + "_clap_name");
    this->HP = this->FragTrap::getHitPoints();
    this->EP = this->ScavTrap::getEnergyPoints();
    this->ATK = this->FragTrap::getATK();

    this->ClapTrap::setATK(this->ATK);
    this->ClapTrap::setHP(this->HP);
    this->ClapTrap::setEP(this->EP);

    std::cout<<this->name<<" Costructor with name called for Diamond"<<std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
}

void DiamondTrap::announce(void)
{
    std::cout<<this->name<< " "<<this->HP<<" "<<this->EP<< " "<<this->ATK<<std::endl;
}
