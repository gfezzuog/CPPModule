#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#   include "ICharacter.hpp"

class Character: public ICharacter
{
    private:
        std::string name;
        AMateria    *inventory[4];
        int         size;
    
    protected:
        ;

    public:
        Character();
        Character(const Character &character);
        Character(std::string name);
        ~Character();
    
    std::string const &getName() const;
    void    equip(AMateria* materia);
    void    unequip(int id);
    void    use(int id, ICharacter &target);
};

#endif