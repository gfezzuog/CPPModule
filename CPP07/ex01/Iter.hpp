
#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void iter(T* array, size_t length, void (*f)(const T&))
{
	for (size_t i = 0; i < length; i++)
		(*f)(array[i]);
}

template <typename T>
void print_cose(const T& c)
{
	std::cout << c << std::endl;
}
#endif