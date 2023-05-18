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
	
	    Fixed 	&operator=(const Fixed &n);
		Fixed	&operator+(const Fixed &fixed);
		Fixed	&operator-(const Fixed &fixed);
		Fixed	&operator*(const Fixed &fixed);
		Fixed	&operator/(const Fixed &fixed);

		bool	operator<(const Fixed &fixed) const;
		bool	operator>(const Fixed &fixed) const;
		bool	operator<=(const Fixed &fixed) const;
		bool	operator>=(const Fixed &fixed) const;
		bool	operator!=(const Fixed &fixed) const;
		bool	operator==(const Fixed &fixed) const;

		Fixed &operator++();
		Fixed &operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		int		getRawBits(void) const;
		void 	setRawsBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;
		static Fixed		&min(Fixed &f1, Fixed &f2);
		static const Fixed	&min(const Fixed &f1, const Fixed &f2);
		static Fixed		&max(Fixed &f1, Fixed &f2);
		static const Fixed	&max(const Fixed &f1, const Fixed &f2);
	};

	std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif