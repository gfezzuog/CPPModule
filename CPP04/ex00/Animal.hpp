#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class   Animal
{
    protected:
        std::string type;
        std::string sound;
        std::string name;
    public:
        Animal();
        Animal(const Animal &animal);
        virtual ~Animal();

    Animal& operator=(const Animal &animal);

    void makeSound() const;
};

#endif