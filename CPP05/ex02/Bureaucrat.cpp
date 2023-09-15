#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("default"), _grade(150)
{}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	this->_name = bureaucrat._name;
	this->_grade = bureaucrat._grade;

	return *(this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
	*this = bureaucrat;
}

Bureaucrat::~Bureaucrat()
{}

std::string Bureaucrat::getName() const
{
	return(this->_name);
}


int Bureaucrat::getGrade() const
{
	return(this->_grade);
}

void Bureaucrat::incrementGrade(int n)
{
	if(n >= this->_grade)
		throw GradeTooHighException();
	else if(n < 0)
		;
	else
		_grade-= n;
}

void Bureaucrat::decrementGrade(int n)
{
	if(n + this->_grade >= 151)
		throw GradeTooLowException();
	else if(n < 0)
		;
	else
		_grade += n;
}

void Bureaucrat::signForm(AForm &form)
{
	if(form.getSigned())
		std::cout<<this->_name<< " signed "<<form.getName()<<std::endl;
	else
		std::cout<<this->_name<< " couldn't sign "<<form.getName()<< " because grade too low"<<std::endl;
}
std::ostream& operator<<(std::ostream& out, Bureaucrat const& bureaucrat)
{
	out<<bureaucrat.getName()<<" "<<"bureaucrat grade "<<bureaucrat.getGrade()<<std::endl;
	return(out);
}