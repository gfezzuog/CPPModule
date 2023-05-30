#include "Cat.hpp"

Cat::Cat()
{
    this->name = "Pipina";
    this->type = "Cat";
    this->brain = new Brain();
    this->sound = "Peaw Peaw mother fucker";
    std::cout << "Cat created"<<std::endl;

}

Cat::Cat(std::string name)
{
    this->name = name;
    this->type = "Cat";
    this->sound = "Peaw Peaw mother fucker";
    this->brain = new Brain();
    std::cout << "Cat created with a name"<<std::endl;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat deleated"<<std::endl;

}

Cat::Cat(const Cat &cat) : Animal(cat)
{
    *this = cat;
    std::cout << "Cat copied"<<std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
    this->type = cat.type;
    this->name = cat.name;
    this->sound = cat.sound;
    this->brain = cat.brain;

    return *this;
}

void Cat::makeSound() const
{
    std::cout<< this->type << " is making this sound "<<  this->sound << std::endl;
}