#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    std::string input;

    std::cout<<"Enter a level from: (DEBUG, INFO, WARNING, ERROR)"<<std::endl;
    std::cin>>input;
    harl.complain(input);
    return(0);
}