#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    BitcoinExchange bitcoin;
    
    if(argc != 2)
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return 0;
    }
    bitcoin.read_map();
    bitcoin.compare_dates(argv);
}