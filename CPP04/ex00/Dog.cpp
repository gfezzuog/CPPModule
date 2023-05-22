#include "Dog.hpp"

Dog::Dog() : name("Pipina")
{
    this->type = "Dog";
}

Dog::Dog(std::string name) : name(name) 
{
    this->type = "Dog";
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
}

void Dog::makesound()
{
    std::cout<<"Peaw Peaw mother fucker"<<std::endl;
}