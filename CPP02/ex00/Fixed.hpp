<<<<<<< HEAD
#ifndef FIXED_HPP
#	define FIXED_HPP
#	include <iostream>

	class Fixed
	{
	    private:
	        int _n;
	        static int const _nbits;
	    public:
	        Fixed();
	        Fixed(const Fixed &n);
	        ~Fixed();
	
	    Fixed &operator=(const Fixed &n);
		int		getRawBits(void) const;
		void 	setRawsBits(int const raw);
	};

#endif
=======
#include <iostream>

class Fixedn
{
private:
	int fixedpoint;
	static const int nbits = 8;

public:
	Fixedn();
	Fixedn(int n);
	Fixedn(const Fixedn &copyfixed);
	~Fixedn();
	Fixedn &operator=(const Fixedn &newfixed);
	int getRawb(void) const;
	void setRawb(int const raw);
};
>>>>>>> f5878d6f8822c3648153bfde54bd21ff45bf9046
