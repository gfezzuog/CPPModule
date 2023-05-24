#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    private:

    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &claptrap);
        virtual ~ScavTrap();

    ScavTrap& operator=(const ScavTrap& scavtrap);
    
    void attack(const std::string &target);
    void guardGate(void);
};

#endif