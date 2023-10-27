#ifndef CPPMODULES_SPAN_HPP
#define CPPMODULES_SPAN_HPP
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cstdlib>

class Span {
private:
    unsigned int        _size;
    std::vector<int>    _vector;
public:
    Span();
    Span(unsigned int n);
    Span(Span &newSpan);
    ~Span();
    void    addNumber(int n);
    void    addManyNumbers(std::vector<int> nums);
    int     shortestSpan();
    int     longestSpan();
    Span &operator=(const Span &span);
	class ArrayOutOfRange: public std::exception {
	public:
		virtual const char *what() const throw(){
			return("ArrayOutOfRange");
		}
	};
};


#endif //CPPMODULES_SPAN_HPP
