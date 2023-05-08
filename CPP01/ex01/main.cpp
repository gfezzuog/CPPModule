#include "Zombie.hpp"

int main(void)
{
    int n;
    std::string name;
    Zombie *horde;
    std::cout<< "Enter the horde pog"<<std::endl;
    while(!(std::cin >> n))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout<<"the frick you doin man"<<std::endl<<"do it again."<<std::endl;
    }
    std::cout<< "enter the horde name"<<std::endl;
    std::cin>>name;
    horde = ZombieHorde(n, name);
    for(int i = 0; i < n; i++)
        horde[i].announce();
    delete [] horde;
    return(0);
}