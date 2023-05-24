#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *animals[10];

	for (int x = 0; x < 10; x++)
	{
		if (x <= 5)
			animals[x] = new Dog();
		else
			animals[x] = new Cat();
		std::cout << std::endl;
	}
	
	for (int x = 0; x < 10; x++)
	{
		delete animals[x];
		std::cout << std::endl;
	}
	return 0;
}