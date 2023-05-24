#include "Brain.hpp"

Brain::Brain()
{
    this->size = 0;
    std::cout<< "Brain constr called"<<std::endl;
}

Brain::Brain(const Brain &brain)
{
    *this = brain;
    std::cout<< "Brain copy constr called"<<std::endl;
}

Brain::~Brain()
{
    std::cout<< "Brain destructor called"<<std::endl;
}

void Brain::createIdea(std::string idea)
{
    this->ideas[this->size] = idea;
    this->size++;

    std::cout<< "Brain idea created"<<std::endl;
}

std::string *Brain::getIdea()
{
    return(this->ideas);
}

