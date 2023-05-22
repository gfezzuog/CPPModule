#include "Animal.hpp"

class Dog: virtual public Animal
{
    private:
        std::string name;

    public:
        Dog();
        Dog(std::string name);
        Dog(const Dog &dog);
        ~Dog();
    
    void makesound();
    Dog &operator=(const Dog &dog);
};