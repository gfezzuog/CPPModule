#include "Animal.hpp"

class Cat: virtual public Animal
{
    private:
        std::string name;

    public:
        Cat();
        Cat(std::string name);
        Cat(const Cat &cat);
        ~Cat();
    
    void makesound();
    Cat &operator=(const Cat &cat);
};