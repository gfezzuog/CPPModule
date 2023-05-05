#include "Zombie.hpp"

int main(void)
{
    int i = 0;
    if (i == 0)
    {
        std::cout<<"Creating a static Zombie"<<std::endl;
        Zombie *zombie = newZombie("BOB");
        zombie->announce();
        delete zombie;
        i++;
    }
    if (i == 1)
    {
        std::string name;
        std::cout<<"Creating a Zombie, you can choose the name"<<std::endl;
        std::cin>>name;
        randomChump(name);
        i++;
    }
    return(0);
}