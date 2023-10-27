#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include<list>
#include<vector>
#include<iostream>
#include <ctime>
#include <iomanip>
#include <limits>
#include<iterator>
#include <set>
#include <cstring>
#include <algorithm>

class PMergeMe
{
private:
	std::list<int> list;
	std::vector<int> vector;
	std::set<std::string> s;
    int size;
public:
	PMergeMe();
	PMergeMe(std::list<int> newLrray, std::vector<int> newVector);
	PMergeMe(PMergeMe &newPMergeMe);
	PMergeMe &operator= (PMergeMe &newPMergeMe);
	~PMergeMe();
	void Checking(char **input);
	void timing();
	int error(std::string string);
	void paramlen(char **argv);
};

template<typename Iterator>
Iterator custom_prev(Iterator iter, typename std::iterator_traits<Iterator>::difference_type n = 1) {
    // Utilizziamo l'operatore '-' per spostarci all'indietro n passi
    while (n > 0) {
        --iter;
        --n;
    }
    return iter;
}

template<typename Iterator>
void insertionSort(Iterator begin, Iterator end)
{
        for (Iterator i = begin; i != end; ++i)
        {
                Iterator j = i;
                while (j != begin && *j < *(custom_prev(j)))
                {
                        std::iter_swap(j, custom_prev(j));
                        j--;
                }
        }
}

template<typename Iterator>
void mergeInsertSort(Iterator begin, Iterator end, int cutoff = 10)
{
        if (std::distance(begin, end) <= cutoff)
                insertionSort(begin, end);
        else
        {
                Iterator middle = begin;
                std::advance(middle, std::distance(begin, end) / 2);
                mergeInsertSort(begin, middle, cutoff);
                mergeInsertSort(middle, end, cutoff);
                std::inplace_merge(begin, middle, end);
        }
}

#endif