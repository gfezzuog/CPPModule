#include "Dog.hpp"

Dog::Dog()
{
    this->brain = new Brain();
    this->name = "Milú";
    this->type = "Dog";
    this->sound = "Bark Bark mother fucker";
    std::cout << "Dog created"<<std::endl;
}

Dog::Dog(std::string name)
{
    this->brain = new Brain();
    this->name = name;
    this->type = "Dog";
    this->sound = "Bark Bark mother fucker";
    std::cout << "Dog created with a name"<<std::endl;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog deleated"<<std::endl;

}

Dog::Dog(const Dog &dog) : Animal(dog)
{
    *this = dog;
    std::cout << "Dog Copied"<<std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
    this->type = dog.type;
    this->name = dog.name;
    this->sound = dog.sound;
    this->brain = dog.brain;

    return *this;
}

void Dog::makeSound() const
{
    std::cout<< this->type << " is making this sound "<<  this->sound << std::endl;
}