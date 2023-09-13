#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b("Bob", 1);
	b.decrement_grade(7);
	std::cout << b;
	b.decrement_grade(35);
	std::cout << b;
	try
	{
		b.decrement_grade(120);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "grade is: "<< b.get_grade() << std::endl;
	return (0);
}