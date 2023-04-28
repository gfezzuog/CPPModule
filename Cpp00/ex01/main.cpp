#include "Contact.hpp"

int main(void)
{
    std::string buff;
    std::string value;
    Contact Contact;

    std::cin>>buff;
    if(buff.compare("ADD") == 0)
    {
        Contact.set_things();
        std::cin>>value;
    }
    return(0);
}