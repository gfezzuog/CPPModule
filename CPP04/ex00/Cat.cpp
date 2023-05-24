#include "Cat.hpp"

Cat::Cat()
{
    this->name = "Pipina";
    this->type = "Cat";
    this->sound = "Peaw Peaw mother fucker";
}

Cat::Cat(std::string name)
{
    this->name = name;
    this->type = "Cat";
    this->sound = "Peaw Peaw mother fucker";

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
    this->sound = cat.sound;

    return *this;
}
