#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

class Serializer
{
private:
	int _n;
public:
	Serializer();
	Serializer(int n);
	Serializer(const Serializer &serializer);
	~Serializer();

	Serializer &operator=(const Serializer &serializer);
	int getN();
};


#endif
