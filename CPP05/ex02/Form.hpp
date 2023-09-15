#ifndef FORM_HPP
#define FORM_HPP
#   include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string _name;
		bool	_signed;
		int	_grade_to_sign;
		int	_grade_to_exec;
		Bureaucrat *_bureaucrat;

	public:

		AForm();
		AForm(const AForm &AForm);
		AForm(const std::string Newname, int Newgrade_to_sign, int Newgrade_to_exec);
		virtual ~AForm();

		class FormGradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw(){return("GradeTooHighException");}
		};

		class FormGradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw(){return("GradeTooLowException");}
		};
		class FormNotSignedException : public std::exception
		{
			public:
			virtual const char *what() const throw()
			{
				return ("Form: NotSignedException");
			}
		};

		class FormCouldNotOpenFileException : public std::exception 
		{
				public:
				virtual const char *what() const throw()
			{
				return ("Form: CouldNotOpenFileException");
			}
		};
	void	beSigned(Bureaucrat &pollo);
	AForm& operator=(const AForm &Aform);
	std::string getName(){return(this->_name);}
	bool getSigned() const {return(this->_signed);}
	int	getGradetoExec() const {return(this->_grade_to_exec);}
	void permissionCheck(const Bureaucrat &bureaucrat) const;
	virtual void execute(const Bureaucrat &bureaucrat) const = 0;
};


#endif