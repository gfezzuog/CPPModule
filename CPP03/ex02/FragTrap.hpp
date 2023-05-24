#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    private:

    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &claptrap);
        ~FragTrap();
    
    FragTrap& operator=(const FragTrap& fragtrap);
    void    highFiveGuys(void);
};

#endif