#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberryCreationForm.hpp"
#include "RobotoryRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

//int	main(void)
//{
//	Bureaucrat				john("John", 1);
//	Bureaucrat				Dan("Dan", 150);
//
//	ShrubberryCreationForm	shrub("Cozy");
//	RobotomyRequestForm		robot("Mike");
//	PresidentialPardonForm	pres("Jerry Smith");
//
//	try
//	{
//		john.signForm(shrub);
//		//shrub.execute(Dan);
//		shrub.execute(john);
//	}
//	catch (AForm::FormGradeTooHighException &e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//	catch (AForm::FormGradeTooLowException &e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//
//	try
//	{
//		john.signForm(robot);
//		//robot.execute(Dan);
//		robot.execute(john);
//	}
//	catch (AForm::FormGradeTooHighException &e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//	catch (AForm::FormGradeTooLowException &e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//
//	try
//	{
//		john.signForm(pres);
//		//pres.execute(Dan);
//		pres.execute(john);
//	}
//	catch (AForm::FormGradeTooHighException &e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//	catch (AForm::FormGradeTooLowException &e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//	return (0);
//}
int	main(void)
{
ShrubberryCreationForm	shrub("Cozy");
RobotomyRequestForm		robot("Mike");
PresidentialPardonForm	pres("Jerry Smith");
	Bureaucrat	bob("Bob", 11);

	std::cout << shrub<< std::endl;
	std::cout << robot << std::endl;
	std::cout << pres << std::endl;
	std::cout << bob << std::endl;

	bob.signForm(shrub);
	bob.signForm(robot);
	bob.signForm(pres);
	bob.incrementGrade(1);
	bob.signForm(shrub);
	bob.signForm(robot);
	bob.signForm(pres);

	std::cout << std::endl << shrub << std::endl;
	std::cout << std::endl << robot << std::endl;
	std::cout << std::endl << pres << std::endl;
	return (0);
}