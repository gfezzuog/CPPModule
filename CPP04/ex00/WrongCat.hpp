#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &animal);
		~WrongCat();
};
