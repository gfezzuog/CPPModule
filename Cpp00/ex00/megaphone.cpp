#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    int i;
	int j;

	if (argc < 2)
	{
		std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return(0);
	}
    i = 1;
	while(argv[i])
	{
		j = 0;
    	while(argv[i][j])
    	{
        	std::cout<< (char)std::toupper(argv[i][j]);
        	j++;
   		}
		i++;
		std::cout << " ";
	}
	std::cout << std::endl;
    return(0);
}