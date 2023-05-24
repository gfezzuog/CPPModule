#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat: public Animal
{
    private:
        Brain *brain;

    public:
        Cat();
        Cat(std::string name);
        Cat(const Cat &cat);
        ~Cat();
    
    Cat &operator=(const Cat &cat);
};

#endif