#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string _target;

public:
    PresidentialPardonForm(std::string const &target);
    PresidentialPardonForm(PresidentialPardonForm const &other);
    ~PresidentialPardonForm();

    PresidentialPardonForm &operator=(PresidentialPardonForm const &other);

    void execute(Bureaucrat const &executor) const;
};


#endif