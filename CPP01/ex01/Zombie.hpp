#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        void announce(void);
        void setname(std::string name);
        Zombie();
        ~Zombie(void);
};
Zombie *ZombieHorde(int N, std::string name);