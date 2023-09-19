#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <random>
#include <iostream>

Base *generate()
{
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int>distribution(1, 3);
	int ran = distribution(mt);
	switch (ran)
	{
		case 1:
			return(new A);
		case 2:
			return(new B);
		default:
			return (new C);
	}
}

void identify(Base *p)
{
	if (dynamic_cast <A *> (p)!= NULL)
		std::cout << "Type pointer A"<<std::endl;
	else if (dynamic_cast <B *> (p)!= NULL)
		std::cout << "Type pointer B"<<std::endl;
	else if (dynamic_cast <C *> (p)!= NULL)
		std::cout << "Type pointer C"<<std::endl;
	else
		std::cout<< "HOW???????????"<<std::endl;
	return;
}

void identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &> (p);
		std::cout<<"type addr A"<<std::endl;
	}catch (const std::exception &e){}
	try
	{
		(void)dynamic_cast<B &> (p);
		std::cout<<"type addr B"<<std::endl;
	}catch (const std::exception &e){}
	try
	{
		(void)dynamic_cast<C &> (p);
		std::cout<<"type addr C"<<std::endl;
	}catch (const std::exception &e){}
}

int main()
{
	Base *base;
	base = generate();
	std::cout<<"ptr identifier: "<<std::endl;
	identify(base);
	std::cout<<"add identifier: "<<std::endl;
	identify(*base);
	return(0);
}
