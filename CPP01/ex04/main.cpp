#include <iostream>
#include <fstream>

int main(int argc, char)
{
    if(argc != 4)
        return(0);
    std::string filename;
    std::string stringtoreplace;
    std::string newstring;
    std::ifstream inputFile(filename);
    if(!inputFile)
    {
        std::cout<< "ERROR" <<std::endl;
        return(0);
    }

    std::string newfile = filename + ".replace";
    std::ofstream outputFile(newfile);
    if (!outputFile)
    {
        std::cout << "ERROR CREATING THE NEW FILE" << std::endl;
        return(0);
    }
    std::string line;
    while (std::getline(inputFile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(stringtoreplace, pos)) != std::string::npos)
        {
            line = line.substr(0, pos) + newstring + line.substr(pos + stringtoreplace.length());
            pos += newstring.length();
        }
        outputFile<<line<<std::endl;
    }
    inputFile.close();
    outputFile.close();

    std::cout<< "Nice move you filthy"<<std::endl;
    return(0);
}