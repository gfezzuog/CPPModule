#include "Iter.hpp"

void	print_(const std::string& str)
{
	std::cout << str << std::endl;
}

void	print_f(const float &f)
{
	std::cout << f << std::endl;
}

int main()
{
	std::string strings[] = {"One", "Two", "Three", "Four"};

	std::cout << "Normal: " << std::endl;
	::iter(strings, 4, print_cose <std::string>);

	std::cout << "To Upper: " << std::endl;
	::iter(strings, 4, print_);

	std::cout << "To Lower: " << std::endl;
	::iter(strings, 4, print_);

	float floats[] = {1.23, 4.56, 7.89};

	std::cout << "Floats: " << std::endl;
	::iter(floats, 3, print_f);

	char chars[] = {'c', 'h', 'a', 'r'};
	::iter(chars, 4, print_cose <char>);
}