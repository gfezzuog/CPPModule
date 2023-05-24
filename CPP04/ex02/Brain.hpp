#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
    private:
        std::string ideas[100];
        int         size;
    public:
        Brain();
        Brain(const Brain &brain);
        ~Brain();

    void createIdea(std::string idea);
    std::string *getIdea();
};

#endif