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
		void set_things();
        void set_name();
        void get_name();
        void get_things();
};
