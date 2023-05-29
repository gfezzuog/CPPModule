#include "Ice.hpp"

Ice::Ice()
{
	this->AMateria::type = "ice";
	std::cout <<"ice Created." << std::endl;
}

Ice::Ice(const Ice &ice) : AMateria()
{
	*this = ice;
	std::cout <<"ice Copy created." << std::endl;
}

Ice::~Ice()
{
	;std::cout <<"ice Destroyed." << std::endl;
}

AMateria	*Ice::clone() const
{
	AMateria	*ice = new Ice();

	std::cout <<"ice Deep copy created." << std::endl;
	return (ice);
}