#include "PhoneBook.hpp"

void PhoneBook::ContactAdd(int i)
{
	this->contact_list[i].SetThings();
}

void PhoneBook::ContactSearch(int s)
{
	std::cout<<this->contact_list[s].GetName()<<std::endl;
	std::cout<<this->contact_list[s].GetLastName()<<std::endl;
	std::cout<<this->contact_list[s].GetNickName()<<std::endl;
	std::cout<<this->contact_list[s].GetNumber()<<std::endl;
	std::cout<<this->contact_list[s].GetDarkestSecret()<<std::endl;
}

std::string PhoneBook::CropString(std::string string)
{
	int i = 9;

	string[i++] = '.';
	while(string[i])
	{
		string[i] = '\0';
		i++;
	}
	return(string);

}

void PhoneBook::PrintStr(std::string str)
{
	std::string tmp;
	std::cout<<std::setw(10);
	if(str.size() > 9)
	{
		tmp = this->CropString(str);
		std::cout<<tmp;
	}
	else
		std::cout<<str;
}
void PhoneBook::PrintAllContact()
{
	std::string str;
	int i = 0;
	while(i < 8)
	{
		std::cout<<i;
		this->PrintStr(this->contact_list[i].GetName());
		std::cout<<" | ";
		this->PrintStr(this->contact_list[i].GetLastName());
		std::cout<<" | ";
		this->PrintStr(this->contact_list[i].GetNickName());
		std::cout<<" | ";
		this->PrintStr(this->contact_list[i].GetNumber());
		std::cout<<std::endl;
		i++;
	}
}

