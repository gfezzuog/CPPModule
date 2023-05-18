#ifndef FIXED_HPP
#	define FIXED_HPP
#	include <iostream>
#	include <cmath>

	class Fixed
	{
	    private:
	        int _n;
	        static int const _nbits;
	    public:
	        Fixed();
	        Fixed(const Fixed &n);
			Fixed(const int i);
			Fixed(const float f);
	        ~Fixed();
	
	    Fixed &operator=(const Fixed &n);

		int		getRawBits(void) const;
		void 	setRawsBits(int const raw);

		float toFloat(int const raw) const;
		int toInt(void) const;
	};

	std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif