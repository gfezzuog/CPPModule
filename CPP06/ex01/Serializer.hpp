#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <stdint.h>
#include <iostream>

struct	Data {std::string	str; int	a;};

class Serializer
{
private:
	Data *data;
public:
	Serializer();
	Serializer(std::string str, int n);
	Serializer(const Serializer &serializer);
	~Serializer();

	Serializer &operator=(const Serializer &serializer);
	uintptr_t serialize(Data *ptr);
	Data *deserialize(uintptr_t raw);
	Data *getData();
};


#endif
