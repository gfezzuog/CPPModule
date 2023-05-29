#include "AMateria.hpp"

AMateria::AMateria() : type("ice")
{
    std::cout<<"AMateria constructor called "<<std::endl;

}

AMateria::AMateria(const AMateria &amateria)
{
    *this = amateria;
    std::cout<<"AMateria copy constructor called "<<std::endl;
}

AMateria::AMateria(std::string const &type)
{
    this->type = type;
    std::cout<<"AMateria type constructor called "<<std::endl;
}

AMateria::~AMateria()
{
    std::cout<<"AMateria destructor called"<<std::endl;
}

std::string const &AMateria::getType() const
{
    return(this->type);
}

void AMateria::use(ICharacter &target)
{
    if(this->type == "ice")
        std::cout<<" shoots an ice bolt at"<< target.getName()<<std::endl;
    else if(this->type == "cure")
        std::cout<<"uses cure on"<<target.getName()<<std::endl;
}
