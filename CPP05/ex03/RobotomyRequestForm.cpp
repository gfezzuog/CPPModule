#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
    : Form("RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other)
    : Form(other), _target(other._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destroyed" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
    if (this != &other)
    {
        Form::operator=(other);
        _target = other._target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::cout << "Brrr" << std::endl;
    if (rand() % 2)
        std::cout << _target << " has been robotomized successfully." << std::endl;
    else
        std::cout << _target << " has not been robotomized." << std::endl;
}
