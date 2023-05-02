#include "Contact.hpp"
#include <ctype.h>


std::string Contact::GetName()
{
	return(this->Name);
}

std::string Contact::GetLastName()
{
	return(this->LastName);
}

std::string Contact::GetNickName()
{
	return(this->Nickname);
}

std::string Contact::GetNumber()
{
	return(this->PhoneNumber);
}

std::string Contact::GetDarkestSecret()
{
	return(this->DarkestSecret);
}

void Contact::SetThings()
{
	std::cout<<"Gimme the name"<<std::endl;
	std::cin>>this->Name;
	std::cout<<"Gimme the last name"<<std::endl;
	std::cin>>this->LastName;
	std::cout<<"Gimme the Nickname"<<std::endl;
	std::cin>>this->Nickname;
	std::cout<<"Gimme the phone number"<<std::endl;
	std::cin>>this->PhoneNumber;
	std::cout<<"Now... tell me your deepest secre"<<std::endl;
	std::cin>>this->DarkestSecret;
}