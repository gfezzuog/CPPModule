#ifndef BUREAUCRAT_HPP
#	define BUREAUCRAT_HPP
#	include <iostream>

class Bureaucrat 
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &bureaucrat);
		Bureaucrat(const std::string Newname, int Newgrade);
		~Bureaucrat();

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw{return("GradeTooHighException");}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw{return("GradeTooLowException");}
		};
	
	std::string getName() const;
	int getGrade() const;
	void incrementGrade(int n);
	void decrementGrade(int n);
}

std::ostream& operator<<(std::ostream& out, Bureaucrat const& bureaucrat);

#endif
	// void setName(const std::string name);
	// void setGrade(int grade);