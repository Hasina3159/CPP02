NAME = Fixed

CC = g++

CPPFLAGS = -Wall -Werror -Wextra

SRCS = $(shell find . -name "*.cpp" | tr '\n' ' ')

OBJS = $(SRCS:.cpp=.o)

$%.o		:	%.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME)		:	$(OBJS)
	$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME) -g

all			:	$(NAME)

clean		:
	rm -rf $(OBJS)

fclean		:	clean
	rm -rf $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re