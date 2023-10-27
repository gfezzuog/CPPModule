#include "Span.hpp"

/**
* Constructors & Operators
*/

Span::Span(): _size(0) {}

Span::Span(unsigned int n): _size(n) {}

Span::Span(Span &newSpan) {
    this->_size = newSpan._size;
    this->_vector = newSpan._vector;
}

Span::~Span() {}

/**
* Member class functions
*/

void Span::addNumber(int n) {
    if (this->_vector.size() == this->_size)
		throw ArrayOutOfRange();
    this->_vector.push_back(n);
}

void Span::addManyNumbers(std::vector<int> nums) {
    size_t i = -1;

    if ((this->_vector.size() + nums.size()) > this->_size)
		throw ArrayOutOfRange();
    while (++i < nums.size())
        addNumber(nums[i]);
}

int Span::longestSpan() {
    std::vector<int> tmp = this->_vector;

    if (this->_size == 1)
        return (0);
    std::sort(tmp.begin(), tmp.end());
    return (*(tmp.end() - 1) - *tmp.begin());
}

int Span::shortestSpan() {
    std::vector<int> tmp = this->_vector;
    size_t it = 0;
    int min;

    if (this->_size == 1)
        return (0);
    std::sort(tmp.begin(), tmp.end());
    min = *(tmp.begin() + 1) - *tmp.begin();
    if (this->_size == 2)
        return (min);
    while(it < tmp.size()) {
        if(tmp[it + 1] && min > (tmp[it + 1] - tmp[it]))
            min = tmp[it + 1] - tmp[it];
        it++;
    }
    return(min);
}
