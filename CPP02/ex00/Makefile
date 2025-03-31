NAME = orthodox_canonical
CC = c++
CFLAGS = -Wall -Wextra -Werror
SRCS = main.cpp\
		Fixed.cpp
OBJS = $(SRCS:.cpp = .o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
%.o:%.cpp
	$(CC) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all