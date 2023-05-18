#include "Fixed.hpp"

const int Fixed::_nbits = 8;

Fixed::Fixed() : _n(0)
{
    std::cout << "Constructor called"<<std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &n)
{
    std::cout<< "Copy constructor called" << std::endl;
    this->_n = n.getRawBits();
    return ;
}

Fixed &Fixed::operator=(const Fixed &n)
{
    std::cout << "Assignment copy operator colled" << std::endl;
    if(this == &n)
        return *(this);
    this->_n = n.getRawBits();
    return *(this);
}


int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_n);
}

void Fixed::setRawsBits(int const raw)
{
    this->_n = raw;
    return ;
}