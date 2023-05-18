#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->name = "ClapTrap";
	this->HP = 10;
	this->EP = 10;
	this->ATK = 0;
}

ClapTrap::~ClapTrap()
{
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->HP = 10;
	this->EP = 10;
	this->ATK = 0;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
    *this = claptrap;
    std::cout<<"ClapTrap copy created "<<std::endl;
    return ;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	this->name = claptrap.name;
	this->ATK = claptrap.ATK;
	this->HP = claptrap.HP;
	this->EP = claptrap.EP;

	return *(this);
}

int ClapTrap::getATK(void)
{
    return(this->ATK);
}


int ClapTrap::getHitPoints(void)
{
    return(this->HP);
}

int ClapTrap::getEnergyPoints(void)
{
    return(this->EP);
}

std::string ClapTrap::getName(void)
{
    return(this->name);
}

void ClapTrap::attack(const std::string &target)
{
    if(this->HP == 0)
        return ;
    else if(this->EP > 1)
    {
        std::cout<<this->name<<" Attacks "<<target<<" causing "<<
         this->ATK<<" points of damage!"<<std::endl;
        this->EP--;
        return ;
    }
    std::cout<<this->name<<" can't attack, he has 0 Energy points left"<<std::endl;
}
//ClapTrap <name> attacks <target>, causing <damage> points of damage!

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->HP == 0)
        return ;
    else if(this->EP > 1)
    {
        this->HP += amount;
        if(this->HP > 10)
        {
            amount -= this->HP%10;
            this->HP = 10;
        }
        std::cout<<this->name << " repaired it' self for "<< amount
            <<" total Hp left "<< this->HP;
        this->EP--;
        return ;
    }
    std::cout<<this->name<<" can't heal, he has 0 Energy points left "<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->HP == 0)
        return ;
    else if (amount > this->HP)
    {
        this->HP = 0;
        std::cout<<"ClapTrap died... Such a glorious death! "<<std::endl;
        return ;
    }
    this->HP -= amount;
    std::cout<<this->name<<" took "<<amount
        << " damges he has "<<this->HP<<" left"<<std::endl;
}