#include "Dog.hpp"

Dog::Dog()
{
    this->name = "Milú";
    this->type = "Dog";
    this->sound = "Bark Bark mother fucker";
}

Dog::Dog(std::string name)
{
    this->name = name;
    this->type = "Dog";
    this->sound = "Bark Bark mother fucker";
}

Dog::~Dog()
{}

Dog::Dog(const Dog &dog)
{
    *this = dog;
}

Dog &Dog::operator=(const Dog &dog)
{
    this->type = dog.type;
    this->name = dog.name;
    this->sound = dog.sound;

    return *this;
}
