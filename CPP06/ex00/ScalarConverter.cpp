#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) :
	_input("0"), _newIntType(0), _newCharType(0), _newFloatType(0.0f),
	_newDoubleType(0.0), _intCheck(false), _floatCheck(false), _charCheck(false),
	_doubleCheck(false), _charNotDisplayable(false), _isLimitBool(false), _limit("")
{}

ScalarConverter::ScalarConverter(const char *val) :
	_input(val), _newIntType(0), _newCharType(0), _newFloatType(0.0f),
	_newDoubleType(0.0), _intCheck(false), _floatCheck(false), _charCheck(false),
	_doubleCheck(false), _charNotDisplayable(false), _isLimitBool(false), _limit("")
{}

ScalarConverter::ScalarConverter(const ScalarConverter &scalarconverter)
{
	*this = scalarconverter;
}

ScalarConverter::~ScalarConverter()
{
	std::cout<<"Class destroyed"<<std::endl;
}

void ScalarConverter::printIntType(std::ostream &out) const
{
	out<<"char: "
	if(!_intCheck)
	{
		out<<"impossible"<<std::endl;
		return ;
	}
	out<<this->_newIntType<<std::endl;
}

void ScalarConverter::printCharType(std::ostream &out) const
{
	out<<"char: "
	if(!_charCheck)
	{
		out<<"impossible"<<std::endl;
		return ;
	}
	if(this->_newCharType > 31 && this->_newCharType < 127)
		out<<"'"<<this->_newCharType<<"'"<<std::endl;
	else
		out<<"Not printable"<<std::endl;
}

void ScalarConverter::printFloatType(std::ostream &out) const
{
	out<<"float: "
	if(!_floatCheck)
	{
		out<<"impossible"<<std::endl;
		return ;
	}
	if(_isLimitBool)
	{
		out<<this->_limit<<"f"<<std::endl;
	}
	else
	{
		out.precision(1);
		out <<std::fixed <<this->_newFloatType<<"f"<<std:endl;
	}
}


void ScalarConverter::printDoubleType(std::ostream &out) const
{
	out<<"double: "
	if(!_doubleCheck)
	{
		out<<"impossible"<<std::endl;
		return ;
	}
	if(_isLimitBool)
	{
		out<<this->_limit<<std::endl;
	}
	else
	{
		out.precision(1);
		out <<std::fixed <<this->_newDoubleType<<std:endl;
	}
}
