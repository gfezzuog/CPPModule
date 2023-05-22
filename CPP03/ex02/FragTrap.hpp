#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    private:
        std::string name;
        unsigned int HP;
        unsigned int EP;
        unsigned int ATK;
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &claptrap);
        ~FragTrap();
    
    FragTrap& operator=(const FragTrap& fragtrap);
    void    highFiveGuys(void);
};

#endif