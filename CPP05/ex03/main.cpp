#include "Intern.hpp"

int main()
{
    Intern someRandomInternA;
    Intern someRandomInternB;
    Intern someRandomInternC;
    Form* a;
    Form* b;
    Form* c;
    Form* d;

    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

    a = someRandomInternA.makeForm("robotomy request", "Bender");
    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;
    b = someRandomInternB.makeForm("presidential pardon", "Pinocho");
    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;
    c = someRandomInternC.makeForm("shrubbery creation", "POLPO");
        std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

    try 
    {
        d = someRandomInternC.makeForm("polpette al sugo", "Genoveffo");
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

    delete a;
    delete b;
    delete c;
    return (0);
}
