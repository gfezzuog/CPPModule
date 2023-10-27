#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <vector>
# include <string>
# include <map>
# include <sstream>
# include <cctype>
# include <algorithm>
# include <cstring>


class BitcoinExchange
{
private:
    std::string line;
    std::string dbline;
    std::string word;
    std::string date;
    float num;
    std::string dbword;
    std::fstream file;
    std::fstream file1;
    std::map<std::string, std::string> dbmap;
public:
    BitcoinExchange();
    BitcoinExchange(BitcoinExchange &newbit);
    BitcoinExchange(std::string newline, std::string newdbline, std::string newword, std::string newdate, float newnum, std::fstream newfile, std::fstream newfile1, std::map<std::string, std::string> newdbmap);
    BitcoinExchange &operator= (BitcoinExchange &newbit);
    ~BitcoinExchange();
    void read_map();
    void compare_dates(char **argv);
    std::string space_removal(std::string word);
    int check(std::string content);
    void find_date(std::string date);
};

#endif