#ifndef CPPMODULES_PRESIDENTIALPARDONFORM_HPP
#define CPPMODULES_PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"


class PresidentialPardonForm: public AForm {
private:
    const std::string _target;
    PresidentialPardonForm(void);
    PresidentialPardonForm(const PresidentialPardonForm &pardonForm);
public:
    PresidentialPardonForm(const std::string target);
    virtual ~PresidentialPardonForm();
    void execute(const Bureaucrat &bureaucrat) const;

	PresidentialPardonForm &operator=(const PresidentialPardonForm &pardonForm);
};
	std::ostream& operator<<(std::ostream& out,AForm &form);



#endif