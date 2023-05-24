#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
	private:
		Brain *brain;

	public:
		WrongCat();
		WrongCat(const WrongCat &animal);
		~WrongCat();
};
