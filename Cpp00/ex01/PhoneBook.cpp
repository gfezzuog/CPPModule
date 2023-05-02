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

void PhoneBook::PrintAllContact()
{
	int i = 0;
	while(i < 8)
	{
		std::cout<<i<<"	";
		std::cout<<this->contact_list[i].GetName()<<" | ";
		std::cout<<this->contact_list[i].GetLastName()<<" | ";
		std::cout<<this->contact_list[i].GetNickName()<<" | ";
		std::cout<<this->contact_list[i].GetNumber()<<std::endl;
		i++;
	}
}

