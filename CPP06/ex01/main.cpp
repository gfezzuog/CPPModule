#include <stdint.h>
#include "Serializer.hpp"

Serializer *deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Serializer *>(raw));
}

uintptr_t serialize(Serializer *raw)
{
	return (reinterpret_cast<uintptr_t>(raw));
}

int main(void)
{
	Serializer *serializer;
	uintptr_t serialized;
	Serializer *deserialized;

	serializer = new Serializer(10);
	serialized = serialize(serializer);
	deserialized = deserialize(serialized);
	std::cout<<"Data init value "<<serializer->getN()<<std::endl;
	std::cout<<"Data serialized value "<<serialized<<std::endl;
	std::cout<<"Data deserialized "<< deserialized->getN()<<std::endl;

	return (0);
}