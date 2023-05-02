#include <iostream>

class Contact
{
    private:
        std::string Name;
        std::string LastName;
        std::string Nickname;
        std::string PhoneNumber;
        std::string DarkestSecret;
    public:
		void SetThings();
        std::string GetName();
        std::string GetLastName();
        std::string GetNickName();
        std::string GetNumber();
        std::string GetDarkestSecret();
  
};
