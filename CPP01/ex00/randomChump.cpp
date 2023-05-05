#include "Zombie.hpp"

void randomChump(std::string name)
{
    std::cout<<"Creating Zombie..."<<std::endl;
	Zombie NewZombie = Zombie(name);
	NewZombie.announce();
}