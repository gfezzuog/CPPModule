#include <iostream>
int main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *strPTR = &brain;
    std::string &strREF = brain;

    std::cout<<"brain address: "<<&brain<<std::endl;
    std::cout<<"strPTR address: "<<&strPTR<<std::endl;
    std::cout<<"strREF address: "<<&strREF<<std::endl;
    std::cout<<"brain value: "<<brain<<std::endl;
    std::cout<<"strPTR value: "<<strPTR<<std::endl;
    std::cout<<"strRED value: "<<strREF<<std::endl;
}