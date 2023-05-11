#include "HumanB.hpp"

HumanB::HumanB(std::string name)
    : name(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	this->weapon = &newWeapon;
}

void HumanB::attack()
{
	std::cout<<this->name<<" attacks with their "<<this->weapon->getType()<<std::endl;
}
