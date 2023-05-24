#ifndef   DIAMONDTRAP_HPP
#define   DIAMONDTRAP_HPP 
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap: virtual public FragTrap, virtual public ScavTrap
{
    private:

    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        virtual ~DiamondTrap();

    void announce();
};

#endif