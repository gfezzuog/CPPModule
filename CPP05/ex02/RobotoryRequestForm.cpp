#include "RobotoryRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy", 72, 45), _target("default") {
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): AForm("Robotomy", 72, 45), _target(target) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomy) : AForm()
{
	*this = robotomy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomy)
{
	static_cast<std::string>(this->_target) = static_cast<std::string>(robotomy._target);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

void RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
	int random;

	this->permissionCheck(bureaucrat);
	std::cout << "*drill noises*" << std::endl;
	random = rand() % 2;
	if (random)
		std::cout << _target << "successfully robotomized" << std::endl;
	else
		std::cout << _target << "could not be romotomized" << std::endl;
}