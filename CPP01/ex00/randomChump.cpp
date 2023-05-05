#include "Zombie.hpp"

void randomChump(std::string name)
{
    std::cout<<"creating Zombie"<<std::endl;
	Zombie NewZombie = Zombie(name);
	NewZombie.announce();
}