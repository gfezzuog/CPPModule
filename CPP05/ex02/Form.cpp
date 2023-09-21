#include "Form.hpp"

AForm::AForm()
{
}
AForm &AForm::operator=(const AForm &Aform)
{
	this->_name = Aform._name;
	this->_bureaucrat = Aform._bureaucrat;
	this->_grade_to_exec = Aform._grade_to_exec;
	this->_grade_to_sign = Aform._grade_to_sign;
	this->_signed = Aform._signed;

	return *(this);
}

AForm::AForm(const AForm &Aform)
{
	*this = Aform;
}

AForm::~AForm()
{
}

AForm::AForm(const std::string Newname, int Newgrade_to_sign, int Newgrade_to_exec)
{
	this->_name = Newname;
	this->_signed = 0;
	this->_grade_to_sign = Newgrade_to_sign;
	this->_grade_to_exec = Newgrade_to_exec;
}

void AForm::permissionCheck(const Bureaucrat &bureaucrat) const
{
    if (!this->getSigned())
        throw FormNotSignedException();
    if (this->getGradetoExec() > bureaucrat.getGrade())
        throw FormGradeTooLowException();
}

void AForm::beSigned(Bureaucrat &pollo)
{
	if(pollo.getGrade() > this->_grade_to_sign)
		throw FormGradeTooLowException();
	else
		this->_signed = true;
}


std::ostream& operator<<(std::ostream& out, AForm &Form) {
	out << "Form [" << Form.getName() << "] info:" << std::endl;
	out << "\t-sign status: " << Form.getSign() << std::endl;
	out << "\t-sign grade required: " << Form.getGradetoSign() << std::endl;
	out << "\t-form exec grade required: " << Form.getGradetoExec() << std::endl;
	return (out);
}
