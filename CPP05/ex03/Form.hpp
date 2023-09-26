#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form {
    private:
        std::string const	_name;
        bool				_isSigned;
        int const			_gradeToSign;
        int const			_gradeToExecute;
    
    public:
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(const Form &copy);
        ~Form();
        Form &operator=(const Form &copy);

        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        bool getIsSigned() const;
        void beSigned(const Bureaucrat &bureaucrat);
        void execute(Bureaucrat const &executor) const;


        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
};

#endif