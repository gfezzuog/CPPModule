#include "Fixed.hpp"

const int Fixed::_nbits = 8;

Fixed::Fixed() : _n(0)
{
    std::cout << "Constructor called"<<std::endl;
}

Fixed::Fixed(const int i)
{
    std::cout << "Constructor converter fron int to fixed called"<< std::endl;
    this->_n = i * (1 << this->_nbits);
}

Fixed::Fixed(const float f)
{
    std::cout << "Constructor converter from float to fixed called" << std::endl;
    this->_n = roundf(f * (1 << this->_nbits));
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

float Fixed::toFloat(void) const
{
    return(((float)this->_n / (float)(1<<this->_nbits)));
}
int Fixed::toInt(void)const
{
    return(roundf(this->toFloat()));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed   &Fixed::operator+(const Fixed &fixed)
{
    this->setRawsBits(this->getRawBits() + fixed.getRawBits());
    return *(this);
}

Fixed   &Fixed::operator-(const Fixed &fixed)
{
    this->setRawsBits(this->getRawBits() - fixed.getRawBits());
    return *(this);
}

Fixed   &Fixed::operator*(const Fixed &fixed)
{
    this->setRawsBits(this->getRawBits() * fixed.getRawBits() >> this->_nbits);
    return *(this);
}

Fixed   &Fixed::operator/(const Fixed &fixed)
{
    this->setRawsBits(this->getRawBits() / fixed.getRawBits());
    return *(this);
}

bool   Fixed::operator<(const Fixed &fixed) const
{
    return(this->getRawBits() < fixed.getRawBits());
}

bool   Fixed::operator>(const Fixed &fixed) const
{
    return(this->getRawBits() > fixed.getRawBits());
}

bool   Fixed::operator==(const Fixed &fixed) const
{
    return(this->getRawBits() == fixed.getRawBits());
}

bool   Fixed::operator!=(const Fixed &fixed) const
{
    return(this->getRawBits() != fixed.getRawBits());
}

bool   Fixed::operator<=(const Fixed &fixed) const
{
    return(this->getRawBits() <= fixed.getRawBits());
}

bool   Fixed::operator>=(const Fixed &fixed) const
{
    return(this->getRawBits() >= fixed.getRawBits());
}

Fixed	&Fixed::operator++(void)
{
	this->_n += 1;
	return *(this);
}

Fixed	Fixed::operator++(int)
{
    Fixed tmp = *this;
	this->_n++;
	return (tmp);
}

Fixed	&Fixed::operator--(void)
{
	this->_n -= 1;
	return *(this);
}

Fixed	Fixed::operator--(int)
{
    Fixed tmp = *this;
	this->_n--;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return f1;
	return f2;
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return f1;
	return f2;
}

const Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 < f2)
		return f1;
	return f2;
}

const Fixed	&Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 > f2)
		return f1;
	return f2;
}