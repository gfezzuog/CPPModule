#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->brain = new Brain();
	this->WrongAnimal::type = "WrongCat";
	std::cout << "[WRONGCAT] "<< " It's a funny cat!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &Wrongcat)
{
    this->brain = new Brain();
	*this = Wrongcat;
	std::cout << "[WRONGCAT] "<<  " It's a funny cat!" << std::endl;
}

WrongCat::~WrongCat()
{
	delete this->brain;
	std::cout << "[WRONGCAT] " << this->type <<" goes to sleep." << std::endl;
}