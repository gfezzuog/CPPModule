
#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void iter(T *ptr, T len, T *f())
{
	int i = 0;
	while (i < len)
	{
		f(ptr);
		i++;
		ptr++;
	}
}
#endif