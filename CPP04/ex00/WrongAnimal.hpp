#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include "Animal.hpp"

class WrongAnimal
{
	protected:
		std::string	type;
		std::string	sound;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &WrongAnimal);
		~WrongAnimal();

	void		makeSound() const;
	std::string	getType() const;

};

#endif
