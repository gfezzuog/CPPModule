#include "RPN.hpp"
#include <cctype>

bool    op_check(char arg) {
    if (arg == '/' || arg == '*'
        || arg == '-' || arg == '+')
        return (true);
    return (false);
}

bool    input_check(std::string str) {
    size_t i = -1;

    while (++i < str.length()) {
        if (std::isspace(str[i]))
            continue;
        std::cout << "char: " << str[i] << std::endl;
        if (isdigit(str[i]))
            std::cout << "num" << std::endl;
        else if (op_check(str[i]))
            std::cout << "op" << std::endl;
        else
            return (false);
    }
    return (true);
}

int main(int argc, char **argv) {
    if (argc != 2)
        return (-1);
    try
    {
        if (!input_check(argv[1]))
            throw InvalidInputException();
    } catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    RPN exp = RPN(argv[1]);
    int res;

    res = exp.solve();
    std::cout << "res: " << res << std::endl;
}
