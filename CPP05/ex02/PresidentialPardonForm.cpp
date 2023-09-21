#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PardonForm", 25, 5), _target("default") {
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): AForm("PardonForm", 25, 5), _target(target) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &pardonForm) : AForm()
{
	*this = pardonForm;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &pardonForm)
{
	static_cast<std::string>(this->_target) = static_cast<std::string>(pardonForm._target);
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const {
	this->permissionCheck(bureaucrat);
	std::cout << _target << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}