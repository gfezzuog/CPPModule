#include <iostream>

class   Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &animal);
        virtual ~Animal();

    Animal& operator=(const Animal &animal);
};