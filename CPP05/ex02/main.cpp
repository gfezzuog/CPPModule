
#include "Bureaucrat.hpp"

int	main(void)
{
    Bureaucrat	bob("Bob", 11);
    AForm 		f("BFF", 9, 9, &bob);

    std::cout << bob << std::endl;

    f.beSigned(bob);
    std::cout<<"cazzo culo"<<std::endl;
    bob.incrementGrade(1);
    f.beSigned(bob);
    bob.signForm(f);

    return (0);
}