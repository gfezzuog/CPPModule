#include "PMergeMe.hpp"

PMergeMe::PMergeMe()
{
}

PMergeMe::PMergeMe(PMergeMe &newPMergeMe)
{
    *this = newPMergeMe;
}

PMergeMe &PMergeMe::operator=(PMergeMe &newPMergeMe)
{
    this->vector = newPMergeMe.vector;
    this->list = newPMergeMe.list;

    return *this;
}

PMergeMe::~PMergeMe()
{
}

PMergeMe::PMergeMe(std::list<int> newList, std::vector<int> newVector)
{
    this->list = newList;
    this->vector = newVector;
}

int PMergeMe::error(std::string string)
{
    std::cerr << string << std::endl;
    return 1;
}

void PMergeMe::timing()
{
    std::list<int>::iterator i = list.begin();
    // std::vector<int>::iterator j = vector.begin();
    std::clock_t start;
    std::clock_t end;
    float time;

    std::cout<<"Before:";
    while(i != list.end())
        std::cout<<" "<< *i++;
    std::cout<<std::endl;
    start = std::clock();
    mergeInsertSort(list.begin(), list.end());
    end = std::clock();
    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    std::cout.precision(std::numeric_limits<double>::digits10);
    time = static_cast<double> (end - start)/CLOCKS_PER_SEC;

    std::cout<<"After with list: ";
    for (std::list<int>::iterator i = list.begin(); i != list.end(); ++i) {
        std::cout << " " << *i;
    }
    std::cout<<std::endl<<"Time to process a range of "<<size<< " elements with std::list ";
    std::cout << time << " seconds" << std::endl;


    // std::cout<<"Sort with list:";
    // i = list.begin();
    // while(i != list.end())
    //     std::cout<<" "<< *i++;
    //std::cout<<std::endl<<"Time: "<<time<< " seconds"<<std::endl;

    start = std::clock();
    mergeInsertSort(vector.begin(), vector.end());
    end = std::clock();
    time = static_cast<double> (end - start)/CLOCKS_PER_SEC;
     std::cout<<"After with vector: ";
    for (std::vector<int>::iterator j = vector.begin(); j != vector.end(); ++j) {
        std::cout << " " << *j;
    }
    std::cout<<std::endl<<"Time to process a range of "<<size<< " elements with std::vector ";
    std::cout << time << " seconds" << std::endl;
}

void    PMergeMe::Checking(char **input)
{
    for (int x = 1; input[x]; x++)
    {
        size = strlen(input[x]);
        for (int y = 0; y < size; y++)
        {
            if (!std::isdigit(input[x][y]))
            {
                throw std::exception();
            }
        }
        s.insert(input[x]);
    }
    for (int x = 1; input[x]; x++)
    {
        int t = atoi(input[x]);
        list.push_back(t);
        vector.push_back(t);
    }
}

void PMergeMe::paramlen(char **argv)
{
    int i = 0;
    while(argv[i])
        i++;
    this->size = i;
}
