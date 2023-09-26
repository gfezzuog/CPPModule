SRCS			=	main.cpp Bureaucrat.cpp Intern.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
				
OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -rf
CXXFLAGS		= -Wall -Wextra -Werror -I.

NAME			= Intern

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
				mkdir OBJS
				mv $(OBJS) OBJS

clean:
				$(RM) OBJS
				$(RM) *.o

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re test