#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    private:

    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &claptrap);
        ~ScavTrap();

    ScavTrap& operator=(const ScavTrap& scavtrap);
    
    void attack(const std::string &target);
    void guardGate(void);
};