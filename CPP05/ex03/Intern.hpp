#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern &copy);
        ~Intern();
        Intern &operator=(const Intern &copy);

        Form *makeForm(std::string formName, std::string target);

        class UnknownFormException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

#endif