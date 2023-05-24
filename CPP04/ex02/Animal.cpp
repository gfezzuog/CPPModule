#include "Animal.hpp"

Animal::Animal()
{
}

Animal::Animal(const Animal &animal)
{
    *this = animal;   
}

Animal::~Animal()
{
}

Animal &Animal::operator=(const Animal &animal)
{
    this->type = animal.type;
    return *this;
}

void Animal::makeSound() const
{
    std::cout<< this->type << " is making this sound "<<  this->sound << std::endl;
}
