#ifndef CPPMODULES_RPN_HPP
#define CPPMODULES_RPN_HPP
#include <iostream>
#include <deque>
#include <fstream>
#include <cstdlib>

class InvalidInputException : public std::exception {
public:
    virtual const char *what() const throw() {
        return ("RPN: InvalidInputException");
    }
};

class RPN {
private:
    std::deque<int> _num;
    std::string     _input;
    int add(int a1, int a2);
    int sub(int a1, int a2);
    int mul(int a1, int a2);
    int div(int a1, int a2);
public:
    RPN(void);
    RPN(std::string input);
    ~RPN(void);

    int opSelect(char c);
    int solve();
    class NumDividedByZeroException : public std::exception {
    public:
        virtual const char *what() const throw() {
            return ("NumDividedByZeroException");
        }
    };
};
typedef int (RPN::*opFunctions) (int a1, int a2);

#endif //CPPMODULES_RPN_HPP
