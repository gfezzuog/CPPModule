#include "Contact.hpp"
#include <iomanip>
class   PhoneBook
	{
	private:
		Contact contact_list[8];
	public:
		void ContactSearch(int s);
		void ContactAdd(int i);
		void PrintAllContact();
		std::string CropString(std::string string);
		void PrintStr(std::string str);
	};