#ifndef FORM_HPP
#define FORM_HPP
#   include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string _name;
        bool    _signed;
        int _grade_to_sign;
        int _grade_to_exec;
        Bureaucrat *_bureaucrat;

    public:

    	Form();
		Form(const Form &Form);
		Form(const std::string Newname, int Newgrade_to_sign, int Newgrade_to_exec, Bureaucrat *Newbureaucrat);
		~Form();

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw(){return("GradeTooHighException");}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw(){return("GradeTooLowException");}
		};
	void    beSigned(Bureaucrat &pollo);
	Form& operator=(const Form &form);
	std::string getName(){return(this->_name);}
	bool getSigned(){return(this->_signed);}	
};


#endif