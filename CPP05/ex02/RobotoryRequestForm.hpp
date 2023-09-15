#ifndef CPPMODULES_ROBOTOMYREQUESTFORM_HPP
#define CPPMODULES_ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
//#include <cstdlibg>
#include <ctime>

class RobotomyRequestForm: public AForm {
private:
	const std::string _target;
	RobotomyRequestForm(void);
	RobotomyRequestForm(const RobotomyRequestForm &robotomy);
public:
	RobotomyRequestForm(const std::string target);
	virtual ~RobotomyRequestForm();
	void execute(const Bureaucrat &bureaucrat) const;
	RobotomyRequestForm &operator=(const RobotomyRequestForm &robotomy);
};

#endif