#include "Cure.hpp"

Cure::Cure()
{
	this->AMateria::type = "cure";
	std::cout <<"Cure Created." << std::endl;
}

Cure::Cure(const Cure &cure) : AMateria()
{
	*this = cure;
	std::cout <<"Cure Copy created." << std::endl;
}

Cure::~Cure()
{
	std::cout <<"Cure Destroyed." << std::endl;
}

AMateria	*Cure::clone() const
{
	AMateria	*cure = new Cure();

	std::cout <<"Cure Deep copy created." << std::endl;
	return (cure);
}