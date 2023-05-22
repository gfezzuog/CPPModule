#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->name = "FragTrap";
	this->HP = 100;
	this->EP = 100;
	this->ATK = 30;

	this->setATK(this->ATK);
	this->setHP(this->HP);
	this->setEP(this->EP);
	this->setName(this->name);
	std::cout<<this->name<< " Has been created"<<std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->HP = 100;
	this->EP = 100;
	this->ATK = 30;

	this->setATK(this->ATK);
	this->setHP(this->HP);
	this->setEP(this->EP);
	this->setName(this->name);
	std::cout<<this->name<< " Has been created"<<std::endl;
}

FragTrap::FragTrap(const FragTrap& claptrap) : ClapTrap(claptrap)
{
	*this = claptrap;

	std::cout<< "Copy constructor called for Fragtrap"<<std::endl;
}

FragTrap::~FragTrap()
{
	std::cout<<"FragTrap destructor called"<<std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& fragtrap)
{
	this->name = fragtrap.name;
	this->HP = fragtrap.HP;
	this->EP = fragtrap.EP;
	this->ATK = fragtrap.ATK;
	
	std::cout << "Operator = called"<<std::endl;
	return *this;
}

void FragTrap::highFiveGuys(void)
{
	std::cout<<"Come on guys, give me an High Five!"<<std::endl;
}

