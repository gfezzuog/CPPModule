#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b("Bob", 1);
	b.decrementGrade(7);
	std::cout << b;
	b.decrementGrade(35);
	std::cout << b;
	try
	{
		b.decrementGrade(120);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "grade is: "<< b.getGrade() << std::endl;
	return (0);
}