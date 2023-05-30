#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->WrongAnimal::type = "WrongCat";
	std::cout << "[WRONGCAT] "<< " It's a funny cat!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &Wrongcat) : WrongAnimal(Wrongcat)
{
	*this = Wrongcat;
	std::cout << "[WRONGCAT] "<<  " It's a funny cat!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "[WRONGCAT] " << this->type <<" goes to sleep." << std::endl;
}