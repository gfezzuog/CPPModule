#include "Character.hpp"

Character::Character() : name("Pipino"), size(0)
{
    std::cout<<this->name<< " Has been created"<<std::endl;
}

Character::Character(std::string name)
{
    this->name = name;
    this->size = 0;
    std::cout<<this->name<< " Has been created"<<std::endl;
}

Character::Character(const Character &character) : ICharacter()
{
    for(int x = 0; x < character.size; x++)
        delete character.inventory[x];
    *this = character;
    std::cout<<"Character copy constructor called "<<std::endl;
    this->size = 0;
}

Character::~Character()
{}

std::string const &Character::getName() const
{
    return(this->name);
}

void Character::equip(AMateria *materia)
{
    if(this->size > 3)
    {
        std::cout<<this->name<< " inventory full"<<std::endl;
        return ;
    }
    this->inventory[this->size] = materia;
    this->size++;
    std::cout<<this->name<< " Has added to his inventory"<<materia->getType()<<std::endl;
}

void Character::unequip(int id)
{
    if(id > 3 || id > this->size)
    {
        std::cout<< "Item not found." <<std::endl;
        return ;
    }
    for (int n = id; n < this->size - 1; n++)
        this->inventory[n] = this->inventory[n + 1];
    this->inventory[this->size] = NULL;
    this->size--;
    std::cout<<this->name<< " Has unequiped an item"<<std::endl;
}

void Character::use(int id, ICharacter &target)
{
    if(id > 3 || id > this->size)
    {
        std::cout<<"item not found"<<std::endl;
        return ;
    }
    this->inventory[id]->AMateria::use(target);
}