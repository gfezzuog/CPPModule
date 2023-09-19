#include "Serializer.hpp"

Serializer::Serializer() : data(NULL)
{}

Serializer::Serializer(std::string str, int n)
{
	this->data = new Data;
	this->data->str = str;
	this->data->a = n;
}

Serializer &Serializer::operator=(const Serializer &serializer)
{
	this->data = serializer.data;
	return(*this);
}

Serializer::Serializer(const Serializer &serializer)
{
	*this = serializer;
}

Serializer::~Serializer()
{}

uintptr_t Serializer::serialize(Data *ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}

Data* Serializer::getData()
{
	return(this->data);
}