#include "Animal.hpp"

class Dog: public Animal
{
    private:
        Brain *brain;

    public:
        Dog();
        Dog(std::string name);
        Dog(const Dog &dog);
        ~Dog();
    
    Dog &operator=(const Dog &dog);
};