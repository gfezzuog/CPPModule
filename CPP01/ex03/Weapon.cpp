#include "Weapon.hpp"

const std::string &Weapon::getType() const
{
    return(type);
}

void Weapon::setType(std::string newType)
{
	this->type = newType;
}

Weapon::Weapon(std::string name)
	: type(name)
{
}

Weapon::~Weapon()
{
}