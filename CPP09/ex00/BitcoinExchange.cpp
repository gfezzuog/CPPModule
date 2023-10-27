#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(BitcoinExchange &newbit)
{
	*this = newbit;
}

BitcoinExchange::BitcoinExchange(std::string newline, std::string newdbline, std::string newword, std::string newdate, float newnum, std::fstream newfile, std::fstream newfile1, std::map<std::string, std::string> newdbmap)
{
    char c;

    this->line = newline;
    this->dbline = newdbline;
    this->word = newword;
    this->date = newdate;
    this->num = newnum;
	if(newfile.is_open() && file.is_open())
   		while (newfile.get(c))
        	file.put(c);
	if(newfile1.is_open() && file1.is_open())
		while(newfile1.get(c))
			file1.put(c);
	this->dbmap = newdbmap;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange &newbit)
{
	char c;

    this->line = newbit.line;
    this->dbline = newbit.dbline;
    this->word = newbit.word;
    this->date = newbit.date;
    this->num = newbit.num;
	if(newbit.file.is_open() && this->file.is_open())
		while(newbit.file.get(c))
			this->file.put(c);
	if(newbit.file1.is_open() && this->file1.is_open())
		while(newbit.file1.get(c))
			this->file1.put(c);
	this->dbmap = newbit.dbmap;

	return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::read_map()
{
	//opening the needed file
	file1.open("data.csv");
	//checking the file if its open
	if(file1.is_open())
	{
		//read a line in file1 and saving it in dbline
		while(std::getline(file1, dbline))
		{
			std::stringstream s(dbline);
			//read the key inside file1 and saving into dbword with a delimiter
			while(std::getline(file1, dbword, ','))
			{
				//read the word in file1 and saving in word with a delimiter
				while(std::getline(file1, word, ','))
				{
					//since we got the key and the paired word, with this function we can save it in our map
					dbmap.insert(std::pair<std::string, std::string>(dbword, word));
				}

			}
		}
	}	
	file1.close();
}

std::string BitcoinExchange::space_removal(std::string word)
{
	word.erase(std::remove(word.begin(), word.end(), ' '), word.end());
	return word;
}

int BitcoinExchange::check(std::string content)
{
	std::stringstream input_stringstream(content);

	getline(input_stringstream,date,' ');
    if (date.size() != 10 && date.size() != 11)
    {
        std::cout << "Error: wrong date format" << std::endl;
        return 0;
    }
    for (int i = 0; i < (int)date.size(); i++)
    {
        if (i == 4 || i == 7)
        {
            if (date[i] != '-')
            {
                std::cout << "Error: wrong date format" << std::endl;
                return 0;
            }
        }
        else
        {
            if (!isdigit(date[i]))
            {
                std::cout << "Error: wrong date format" << std::endl;
                return 0;
            }
        }
    }
	if(!getline(input_stringstream,date,' '))
	{
		std::cout << "Error: bad input => " <<date<< std::endl;
        return 0;
	}
	else
	{
		getline(input_stringstream,date);
		std::istringstream da(date);
		da >> num;
		if (num < 0)
		{
			std::cout << "Error: not a positive number."<< std::endl;
			return 0;
		}
		if(num >= 2147483648)
		{
			std::cout << "Error: too large a number."<< std::endl;
			return 0;
		}
	}
    return 1;
}

void BitcoinExchange::find_date(std::string day)
{
	std::map<std::string, std::string>::iterator it = dbmap.lower_bound(day);
    if (it == dbmap.begin()) {
        std::cout << "No lower key found" << std::endl;
    } else {
        --it;
		float a, b;
		std::istringstream as(dbword);
		as >> a;
		std::istringstream bs(it->second);
		bs >> b;
        std::cout<<word<<"=>"<<dbword<<" = "<< (a * b)<<std::endl;
    }
}

void BitcoinExchange::compare_dates(char **argv)
{
	std::map<std::string, std::string>::iterator it;
	int found = 0;
	float a, b;

	file.open(argv[1]);
    if (file.is_open())
    {
        while (getline(file, line))
        {
			if(check(line.c_str()) == 0)
				continue;
            std::stringstream s(line);
            while (getline(s, word, '|'))
            {
				word = space_removal(word);
				for(it = dbmap.begin(); it != dbmap.end(); it++)
				{
					if (std::memcmp(it->first.c_str(), word.c_str(), 11) == 0)
					{
						getline(s, dbword);
						std::stringstream as(dbword);
						as >> a;
						std::stringstream bs(it->second);
						bs >> b;
						std::cout<<word<<"=>"<<dbword<<" = "<< (a * b)<<std::endl;
						found = 1;
					}
					getline(s, dbword);
				}
				if (found == 0)
				{
					find_date(word);
				}
				found = 0;
            }
        }
    }
    file.close();
}