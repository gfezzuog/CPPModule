#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
    private:
        std::string const	_name;
        int					_grade;
    
    public:
        Bureaucrat(std::string const &name, int grade);
        Bureaucrat(Bureaucrat const &src);
        ~Bureaucrat(void);
        Bureaucrat	&operator=(Bureaucrat const &rhs);

        std::string getName() const;
        int getGrade() const;
        std::exception GradeTooHighException();
        std::exception GradeTooLowException();
        void incrementGrade(int n);
        void decrementGrade(int n);
};

#endif