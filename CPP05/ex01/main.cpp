
#include "Bureaucrat.hpp"

int	main(void)
{
    Bureaucrat	bob("Bob", 11);
    Form 		f("BFF", 15, 15, &bob);

    std::cout << bob << std::endl;

    f.beSigned(bob);
    bob.incrementGrade(1);
    bob.signForm(f);

    return (0);
}