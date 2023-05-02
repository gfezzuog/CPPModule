
#include "PhoneBook.hpp"

int main(void)
{
    std::string buff;
    std::string value;
	PhoneBook	cazzo;

	int i = 0;
	std::string s;
    while(1)
    {
		std::cin>>buff;
		if(buff.compare("ADD") == 0)
    	{
			if (i == 7)
				i = 0;
       		cazzo.ContactAdd(i);
			i++;
    	}
		else if(buff.compare("SEARCH") == 0)
		{
			cazzo.PrintAllContact();
			std::cout<<"Give me the index you want to see fronm 0 to 7"<<std::endl;
			std::cin>>s;
			if(s.size() != 1 || s[0] > '7' || s[0] < '0')
			{
				std::cout<<"This is not a number or is not in the range"<<std::endl;
				continue;
			}
			cazzo.ContactSearch(s[0] - 48);
		}
		else if(buff.compare("EXIT")  == 0)
			return(0);
	}
    return(0);
}