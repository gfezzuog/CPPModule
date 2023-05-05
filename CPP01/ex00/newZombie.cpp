#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie* NewZombie = new Zombie();
	NewZombie->set_zombiename(name);
    std::cout<<": BraiiiiiiinnnzzzZ..."<<std::endl;
    return(NewZombie);
}

Zombie::Zombie()
{
}
