#include "Form.hpp"

Form::Form()
{
}
Form &Form::operator=(const Form &form)
{
	this->_name = form._name;
	this->_bureaucrat = form._bureaucrat;
	this->_grade_to_exec = form._grade_to_exec;
	this->_grade_to_sign = form._grade_to_sign;
	this->_signed = form._signed;

	return *(this);
}

Form::Form(const Form &form)
{
	*this = form;
}

Form::~Form()
{
}

Form::Form(const std::string Newname, int Newgrade_to_sign, int Newgrade_to_exec, Bureaucrat *Newbureaucrat)
{
	this->_name = Newname;
	this->_signed = 0;
	this->_grade_to_sign = Newgrade_to_sign;
	this->_grade_to_exec = Newgrade_to_exec;
	this->_bureaucrat = Newbureaucrat;
}


void Form::beSigned(Bureaucrat &pollo)
{
	if(pollo.getGrade() <= this->_grade_to_sign)
		this->_signed = true;
	else
		throw GradeTooLowException();
}
