#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern hired" << std::endl;
}

Intern::Intern(const Intern &copy)
{
    (void)copy;
}

Intern::~Intern()
{
    std::cout << "Intern fired" << std::endl;
}

Intern &Intern::operator=(const Intern &copy)
{
    (void)copy;
    return (*this);
}

Form *Intern::makeForm(std::string formName, std::string target)
{
    switch (formName[0])
    {
        case 'p':
            if (formName == "presidential pardon")
            {
                std::cout << "Intern creates " << formName << std::endl;
                return (new PresidentialPardonForm(target));
            }
            break;
        case 'r':
            if (formName == "robotomy request")
            {
                std::cout << "Intern creates " << formName << std::endl;
                return (new RobotomyRequestForm(target));
            }
            break;
        case 's':
            if (formName == "shrubbery creation")
            {
                std::cout << "Intern creates " << formName << std::endl;
                return (new ShrubberyCreationForm(target));
            }
            break;
    }
    throw UnknownFormException();
}

const char *Intern::UnknownFormException::what() const throw()
{
    return ("Unknown form");
}

