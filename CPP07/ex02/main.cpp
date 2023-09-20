#include <iostream>
#include "Array.hpp"
#include <cstdlib>

#define MAX_VAL 750
int main()
{
	srand(time(NULL));

	const int count = 5;

	Array<int> a(count);
	for (unsigned int i = 0; i < a.getSize(); i++)
		a[i] = rand() % 100 + 1;

	Array<std::string> c(count);
	c[0] = "John";
	c[1] = "Jim";
	c[2] = "Joe";
	c[3] = "Jack";
	c[4] = "James";

	Array<int> b(a);
	Array<std::string> d(c);

	std::cout << "before: " << std::endl << "a\tb\tc\td" << std::endl << std::endl;
	for (unsigned int i = 0; i < b.getSize(); i++)
		std::cout << a[i] << "\t" << b[i] << "\t" << c[i] << "\t" << d[i] << std::endl;

	for (unsigned int i = 0; i < a.getSize(); i++)
		a[i] = a[i] * 2;

	for (unsigned int i = 0; i < c.getSize(); i++)
		c[i] = c[i].append("_2").data();

	std::cout << "after: " << std::endl << "a\tb\tc\td" << std::endl << std::endl;
	for (unsigned int i = 0; i < b.getSize(); i++)
		std::cout << a[i] << "\t" << b[i] << "\t" << c[i] << "\t" << d[i] << std::endl;
	std::cout << std::endl;

	Array<int> myarr;

	try
	{
		std::cout << myarr[0] << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout<<"cus cus"<<std::endl;
		std::cerr << e.what() << std::endl;
		return (0);
	}
}