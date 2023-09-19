#include <stdint.h>
#include "Serializer.hpp"

int main(void)
{
	Serializer *first;
	uintptr_t second;
	Data *third;

	first = new Serializer("banana", 10);
	second = first->serialize(first->getData());
	third = first->deserialize(second);

	std::cout<<"Data init value "<<first->getData()<<std::endl;
	std::cout<<"Data serialized value "<<second<<std::endl;
	std::cout<<"Data deserialized "<< third<<std::endl;

	return (0);
}