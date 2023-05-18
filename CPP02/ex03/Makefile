NAME = Fixed

CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror

FILES = Fixed.cpp	  \
		bsp.cpp		   \
		Point.cpp		\
		main.cpp		 \

OBJ = $(FILES:.cpp=.o)

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(FILES) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME) $(OBJ)

re: fclean all

.PHONY: all clean fclean re