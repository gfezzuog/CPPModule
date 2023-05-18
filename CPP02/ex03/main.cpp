#include "Point.hpp"

int main(void)
{
	Point a(0, 0);
	Point b(10, 30);
	Point c(20, 0);
	Point p(10, 15);
	Point p2(30, 15);

	std::cout << "A (" << a.getX() << " ; " << a.getY() << ")" << std::endl;
	std::cout << "B (" << b.getX() << " ; " << b.getY() << ")" << std::endl;
	std::cout << "C (" << c.getX() << " ; " << c.getY() << ")\n" << std::endl;

	std::cout << "P (" << b.getX() << " ; " << b.getY() << ")" << std::endl;
	std::cout << "P2 (" << c.getX() << " ; " << c.getY() << ")\n" << std::endl;

	std::cout << "P is ";
	if (!(bsp(a, b, c, p)))
		std::cout << "outside" << std::endl;
	else
		std::cout << "inside" << std::endl;

	std::cout << "P2 is ";
	if (!(bsp(a, b, c, p2)))
		std::cout << "outside" << std::endl;
	else
		std::cout << "inside" << std::endl;
	return 0;
}