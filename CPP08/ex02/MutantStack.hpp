#ifndef  MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>

template <typename T>

class MutantStack : public std::stack<T>
{
public:
	MutantStack(): std::stack<T> (){};
	MutantStack(const MutantStack &newstack): std::stack<T> (newstack){};
	virtual ~MutantStack() {}
	MutantStack &operator=(const MutantStack &newstack)
	{
		if(this != &newstack)
			std::stack<T>::operator=(newstack);
		return (*this);
	}
	typedef typename std::deque<T>::iterator iterator;
	iterator begin(){return std::stack<T>::c.begin();}
	iterator end(){return std::stack<T>::c.end();}
};

#endif