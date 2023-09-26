#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name), _grade(src._grade)
{
    *this = src;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
    if (this != &rhs)
        this->_grade = rhs._grade;
    return (*this);
}

void Bureaucrat::incrementGrade(int n)
{
    if (this->_grade - n < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade -= n;
}

void Bureaucrat::decrementGrade(int n)
{
    if (this->_grade + n > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade += n;
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

std::exception Bureaucrat::GradeTooLowException()
{
    std::cout << "Grade too low" << std::endl;
    throw std::exception();
}

std::exception Bureaucrat::GradeTooHighException()
{
    std::cout << "Grade too high" << std::endl;
    throw std::exception();
}