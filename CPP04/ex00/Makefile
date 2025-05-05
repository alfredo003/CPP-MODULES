NAME = Animal
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -rf
SRCS = main.cpp \
	Animal.cpp \
	Cat.cpp \
	Dog.cpp \
	WrongAnimal.cpp\
	WrongCat.cpp 

OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@clear



%.o:%.cpp
	$(CC) -c $< -o $@

clean: 
	$(RM) $(OBJS)
	@clear

fclean: clean
	$(RM) $(NAME)
	@clear

re: fclean all