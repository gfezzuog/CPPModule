#include "Contact.hpp"
#include <ctype.h>

int check_name(std::string value)
{
	int i = 0;

	while(value[i])
	{
		if(isalpha(value[i]) == 0)
			return(1);
		i++;
	}
	return(0);
}

int check_number(std::string value)
{
	int i = 0;

	while(value[i])
	{
		if(isdiit(value[i] + 48) == 0) return(1);
		i++;
	}
	return(0);
}

void Contact::set_things()
{
    std::string value;
	while(1)
	{
		std::cout<<"Gimme the name"<<std::endl;
		std::cin>>value;
		if(check_name(value))
		{
			std::cout<<"Name can contain only letters"<<std::endl;
			continue;
		}
		this->Name = value;
		std::cout<<"Gimme the last name"<<std::endl;
		std::cin>>value;
		if(check_name(value))
		{
			std::cout<<"Last name can contain only letters"<<std::endl;
			continue;
		}
		this->LastName = value;
		std::cout<<"Gimme the Nickname"<<std::endl;
		std::cin>>this->Nickname;
		std::cout<<"Gimme the phone number"<<std::endl;
		std::cin>>value;
		if(check_number(value))
		{
			std::cout<<"Its a phone number not the Tax ID code"<<std::endl;
			continue;
		}
		this->PhoneNumber = value;
		std::cout<<"Now... tell me your deepest secre"<<std::endl;
		std::cin>>this->DarkestSecret;
		break;
	}

}