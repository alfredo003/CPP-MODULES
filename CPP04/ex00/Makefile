NAME = Animal
CFLAGS = -Wall -Wextra -Werror
CC = c++
RM = rm -rf
SRCS = main.cpp \
	Animal.cpp \
	Cat.cpp \
	Dog.cpp \
	WrongAnimal.cpp\
	WrongCat.cpp 
OBJS = $(SRCS:.cpp = .o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	$(CC) $< -c $@

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all