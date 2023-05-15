#include <iostream>

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void (Harl::*msg[4])(void);
	public:
		void complain(std::string level);
		Harl();
		~Harl();
};