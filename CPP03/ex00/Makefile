NAME = a.out
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp \
	ClapTrap.cpp

OBJS = $(SRCS:.cpp=.o)
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	$(CC) -c $< -o $@

clean:
	@$(RM) $(OBJS)


fclean: clean
	@$(RM) $(NAME)

re: fclean all
