#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "";
	this->sound = "";
	std::cout <<"[WRONGANIMAL] " << " A wild strange animal appear!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &Wronganimal)
{
	*this = Wronganimal;
	std::cout <<"[WRONGANIMAL] " << " A wild strange animal appear! " << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout <<"[WRONGANIMAL] "<< this->type << " runs away... " << std::endl;
}

void	WrongAnimal::makeSound() const
{
	if (this->type == "WrongCat")
		std::cout <<"[WRONGANIMAL] "<< this->type << " does a... bark?!" << std::endl;
	else if (this->type == "WrongDog")
		std::cout <<"[WRONGANIMAL] "<< this->type << " does a... miao?!" << std::endl;
	else
		std::cout <<"[WRONGANIMAL] "<< this->type << " does nothing..." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}