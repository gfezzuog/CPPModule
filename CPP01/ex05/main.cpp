#include "Harl.hpp"

int main(void)
{
    Harl harl;
    std::string input;

    std::cout<<"Enter a level from: (DEBUG, INFO, WARNING, ERROR)"<<std::endl;
    std::cin>>input;
    if (input.compare("DEBUG") && input.compare("INFO")
        && input.compare("WARNING") && input.compare("ERROR"))
        return(0);
    harl.complain(input);
    return(0);
}