#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->WrongAnimal::type = "WrongCat";
	std::cout << "[WRONGCAT] "<< " It's a funny cat!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &Wrongcat)
{
	*this = Wrongcat;
	std::cout << "[WRONGCAT] "<<  " It's a funny cat!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "[WRONGCAT] " MAGENTA << this->type <<" goes to sleep." << std::endl;
}