NAME = a.out
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp \
	  AMateria.cpp \
	  Character.cpp \
	  Cure.cpp \
	  Ice.cpp \
	  MateriaSource.cpp

OBJS = $(SRCS:.cpp=.o)
RM = rm -rf

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