#include "Serializer.hpp"

Serializer::Serializer() : _n(0)
{}

Serializer::Serializer(int n)
{
	this->_n = n;
}

Serializer &Serializer::operator=(const Serializer &serializer)
{
	this->_n = serializer._n;
	return(*this);
}

Serializer::Serializer(const Serializer &serializer)
{
	*this = serializer;
}

Serializer::~Serializer()
{}

int Serializer::getN()
{
	return(this->_n);
}