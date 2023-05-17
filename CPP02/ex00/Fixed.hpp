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