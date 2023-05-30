#include "Dog.hpp"

Dog::Dog()
{
    this->name = "Milú";
    this->type = "Dog";
    this->sound = "Bark Bark mother fucker";
    std::cout << "Dog created"<<std::endl;
}

Dog::Dog(std::string name)
{
    this->name = name;
    this->type = "Dog";
    this->sound = "Bark Bark mother fucker";
    std::cout << "Dog created with a name"<<std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog deleated"<<std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
    std::cout << "Dog Copied"<<std::endl;
    *this = dog;
}

Dog &Dog::operator=(const Dog &dog)
{
    this->type = dog.type;
    this->name = dog.name;
    this->sound = dog.sound;

    return *this;
}
