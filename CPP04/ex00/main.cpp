#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	j->makeSound();
	meta->makeSound();

	const	WrongAnimal* newmeta = new WrongAnimal();
	const	WrongAnimal* cat = new WrongCat();
	cat->makeSound();
	newmeta->makeSound();

	delete meta;
	delete j;
	delete i;
	delete newmeta;
	delete cat;

	return 0;
}