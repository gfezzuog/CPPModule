#include "Cat.hpp"

Cat::Cat() : name("Pipina")
{
    this->type = "Cat";
}

Cat::Cat(std::string name) : name(name) 
{
    this->type = "Cat";
}

Cat::~Cat()
{}

Cat::Cat(const Cat &cat)
{
    *this = cat;
}

Cat &Cat::operator=(const Cat &cat)
{
    this->type = cat.type;
    this->name = cat.name;
}

void Cat::makesound()
{
    std::cout<<"Peaw Peaw mother fucker"<<std::endl;
}
