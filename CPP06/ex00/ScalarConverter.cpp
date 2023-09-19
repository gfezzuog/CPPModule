#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) :
	_input("0"), _newIntType(0), _newCharType(0), _newFloatType(0.0f),
	_newDoubleType(0.0), _intCheck(false), _floatCheck(false), _charCheck(false),
	_doubleCheck(false), _charNotDisplayable(false), _outOfRange(false), _isLimitBool(false), _limit("")
{}

ScalarConverter::ScalarConverter(const char *val) :
	_input(val), _newIntType(0), _newCharType(0), _newFloatType(0.0f),
	_newDoubleType(0.0), _intCheck(false), _floatCheck(false), _charCheck(false),
	_doubleCheck(false), _charNotDisplayable(false), _outOfRange(false), _isLimitBool(false), _limit("")
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
	out<<"int: ";
	if(!_intCheck)
	{
		out<<"impossible"<<std::endl;
		return ;
	}
	out<<this->_newIntType<<std::endl;
}

void ScalarConverter::printCharType(std::ostream &out) const
{
	out<<"char: ";
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
	out<<"float: ";
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
		out <<std::fixed <<this->_newFloatType<<"f"<<std::endl;
	}
}


void ScalarConverter::printDoubleType(std::ostream &out) const
{
	out<<"double: ";
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
		out <<std::fixed <<this->_newDoubleType<<std::endl;
	}
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &scalarconverter)
{
	this->_newIntType = scalarconverter._newIntType;
	this->_newCharType = scalarconverter._newCharType;
	this->_newFloatType = scalarconverter._newFloatType;
	this->_newDoubleType = scalarconverter._newDoubleType;
	this->_intCheck = scalarconverter._intCheck;
	this->_floatCheck = scalarconverter._floatCheck;
	this->_charCheck = scalarconverter._charCheck;
	this->_doubleCheck = scalarconverter._doubleCheck;
	this->_input = scalarconverter._input;
	this->_charNotDisplayable = scalarconverter._charNotDisplayable;
	this->_outOfRange = scalarconverter._outOfRange;
	this->_isLimitBool = scalarconverter._isLimitBool;
	this->_limit = scalarconverter._limit;
	return(*this);
}

std::ostream &operator<<(std::ostream &out, const ScalarConverter &scalarConverter) {
	if (scalarConverter.getOutRange()) {
		out << "values out of range" << std::endl;
		return (out);
	}
	if (scalarConverter.getCharNotDisplayable()) {
		out << "input format error" << std::endl;
		return (out);
	}
	scalarConverter.printCharType(out);
	scalarConverter.printIntType(out);
	scalarConverter.printFloatType(out);
	scalarConverter.printDoubleType(out);
	return (out);
}

bool ScalarConverter::OutOfRange(int type, double dVal)
{
	if(type == ScalarConverter::charType)
		return(dVal < 0 || dVal > std::numeric_limits<char>::max());
	if(type == ScalarConverter::intType)
		return(dVal <std::numeric_limits<int>::min() || dVal > std::numeric_limits<int>::max());
	if(type == ScalarConverter::floatType)
		return(dVal < -std::numeric_limits<float>::min() || dVal > std::numeric_limits<float>::max());
	return(true);
}

bool ScalarConverter::_checkLimits(const char *value)
{
	const std::string cases[4]= {"inf", "+inf", "-inf", "nan"};

	for (int i = 0; i < 4; i++) {
		if (value == cases[i] || value == (cases[i] + "f")) {
			_isLimitBool = true;
			_limit = cases[i];
			if (i == 1)
				_limit = cases[0];
			_floatCheck = true;
			_doubleCheck = true;
			return (true);
		}
	}
	return (false);
}

int ScalarConverter::_getType(const char *val)
{
	int i = 0;
	bool intType = true;
	bool nonNumeric = true;
	bool floatType = false;

	if(val[0] && val[1] == '\0' && (val[i] < '0' || val[i] > '9'))
		return(ScalarConverter::charType);
	if(val[i] == '-' || val[i] == '+')
		i++;
	while(val[i] && (val[i] >= '0' || val[i] <= 9))
	{
		i++;
		nonNumeric = false;
	}
	if (val[i] == '.')
	{
		i++;
		intType = false;
		while(val[i] && (val[i] >= '0' && val[i] <= '9'))
		{
			i++;
			nonNumeric = false;
		}
	}
	if(val[i] == 'f')
	{
		i++;
		floatType = true;
	}
	if(val[i] || nonNumeric || (intType && floatType))
		return(ScalarConverter::nonScalarType);
	else if(floatType)
		return(ScalarConverter::floatType);
	else if(intType)
		return (ScalarConverter::intType);
	return(ScalarConverter::doubleType);
}

void ScalarConverter::_fromInt(const char *input)
{
	if((strlen(input) == 10 && !strcmp(input, "2147483647"))
	|| (strlen(input) == 11 && !strcmp(input, "-2147483648"))
	|| (strlen(input) == 11 && !strcmp(input, "+2147483647")))
	{
		_outOfRange = true;
		return ;
	}
	_newIntType = atoi(input);
	_intCheck = true;
	_newFloatType = static_cast<float>(_newIntType);
	_floatCheck = true;
	_newDoubleType = static_cast<double>(_newIntType);
	_doubleCheck = true;
	if(!OutOfRange(ScalarConverter::_newCharType, _newDoubleType))
	{
		_newCharType = static_cast<char>(_newIntType);
		_charCheck = true;
	}
}

void ScalarConverter::_fromChar(const char *input)
{
	_newCharType = input[0];
	_charCheck = true;
	_newIntType = static_cast<int>(_newCharType);
	_intCheck = true;
	_newFloatType = static_cast<float>(_newCharType);
	_floatCheck = true;
	_newDoubleType = static_cast<double>(_newCharType);
	_doubleCheck = true;
}

void ScalarConverter::_fromFloat(const char *input)
{
	char *end = NULL;

	_newFloatType = std::strtof(input, &end);
	if (input == end) {
		_charNotDisplayable = true;
		return;
	}
	if (errno == ERANGE) {
		_outOfRange = true;
		return;
	}
	_floatCheck = true;
	_newDoubleType = static_cast<double>(_newFloatType);
	_doubleCheck = true;
	if (!OutOfRange(ScalarConverter::intType, _newDoubleType)) {
		_newIntType = static_cast<int>(_newDoubleType);
		_intCheck = true;
	}
	if (!OutOfRange(ScalarConverter::charType, _newDoubleType)) {
		_newCharType = static_cast<char>(_newFloatType);
		_charCheck = true;
	}
}

void ScalarConverter::_fromDouble(const char *input) {
	char *end = NULL;

	_newDoubleType = std::strtod(input, &end);
	if (input == end) {
		_charNotDisplayable = true;
		return;
	}
	if (errno == ERANGE) {
		_outOfRange = true;
		return;
	}
	_doubleCheck = true;
	_newFloatType = static_cast<float >(_newDoubleType);
	_floatCheck = true;
	if (!OutOfRange(ScalarConverter::intType, _newDoubleType))
	{
		_newIntType = static_cast<int>(_newDoubleType);
		_intCheck = true;
	}
	if(!OutOfRange(ScalarConverter::charType, _newDoubleType))
	{
		_newCharType = static_cast<char>(_newDoubleType);
		_charCheck = true;
	}
}

void ScalarConverter::converter()
{
	convFunction convert[4] = {&ScalarConverter::_fromChar, &ScalarConverter::_fromInt, &ScalarConverter::_fromFloat, &ScalarConverter::_fromDouble};

	if(_checkLimits(this->_input))
		return;
	int type = _getType(this->_input);
	std::cout<<"[debug] type: " << type << std::endl;
	if(type == ScalarConverter::nonScalarType)
		this->_charNotDisplayable = true;
	else
		(this->*convert[type])(_input);
}

bool ScalarConverter::getCharNotDisplayable(void) const
{
	return(this->_charNotDisplayable);
}

bool ScalarConverter::getOutRange(void) const
{
	return(this->_outOfRange);
}