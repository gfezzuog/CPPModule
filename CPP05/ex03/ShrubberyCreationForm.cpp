#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
    : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other)
    : Form(other), _target(other._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destroyed" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
    if (this != &other)
    {
        Form::operator=(other);
        _target = other._target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
std::cout << "                    _{\\ _{\\{\\/}/}/}__" << std::endl;
std::cout << "                   {/{/\\}{/{/\\}(\\}{/\\}_" << std::endl;
std::cout << "                  {/{/\\}{/{/\\}(_)\\}{/{/\\}  _" << std::endl;
std::cout << "                {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}" << std::endl;
std::cout << "               {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}" << std::endl;
std::cout << "              _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}/}" << std::endl;
std::cout << "             {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl;
std::cout << "             _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}" << std::endl;
std::cout << "            {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}" << std::endl;
std::cout << "             {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}" << std::endl;
std::cout << "              {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)" << std::endl;
std::cout << "              {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}" << std::endl;
std::cout << "              {/{\\{\\/}{\\{\\/}/}{\\{\\(_)/}/}{\\/}" << std::endl;
std::cout << "               (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)" << std::endl;
std::cout << "                  {/{/{\\{\\/}{/{\\{\\{\\(_)/}" << std::endl;
std::cout << "                    {/{\\{\\{\\/}/}{\\{\\\\}/}" << std::endl;
std::cout << "                     {){/ {\\/}{\\/} \\}\\}" << std::endl;
std::cout << "                      (_)  \\.-'.-/" << std::endl;
std::cout << "                  __...--- |'-.-'| --...__" << std::endl;
std::cout << "           _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__" << std::endl;
std::cout << "         -\"    ' .  . '    |.'-._| '  . .  '   " << std::endl;
std::cout << "         .  '-  '    .--'  | '-.'|    .  '  . '" << std::endl;
std::cout << "                  ' ..     |'-_.-|" << std::endl;
std::cout << "          .  '  .       _.-|-._ -|-._  .  '  ." << std::endl;
std::cout << "                      .'   |'- .-|   '. " << std::endl;
std::cout << "          ..-'   ' .  '.   `-._.-'   .'  '  - ." << std::endl;
std::cout << "           .-' '        '-._______.-'     '  ." << std::endl;
std::cout << "              .      ~," << std::endl;
std::cout << "         .       .   |\\   .    ' '-." << std::endl;
std::cout << "         ___________/  \\____________" << std::endl;
std::cout << "        /  Why is it, when you want \\ " << std::endl;
std::cout << "       |  something, it is so damn   |" << std::endl;
std::cout << "       |    much work to get it?     |" << std::endl;
std::cout << "        \\___________________________/" << std::endl;
}