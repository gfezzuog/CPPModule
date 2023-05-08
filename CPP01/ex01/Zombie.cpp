#include "Zombie.hpp"

Zombie::~Zombie(void)
{
    std::cout<<"This zombie has been slayin "<<this->name<<std::endl;
}

void Zombie::announce(void)
{
	std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

void Zombie::setname(std::string name)
{
	this->name = name;
}

Zombie::Zombie()
{
}
