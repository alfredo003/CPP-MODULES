
NAME	= Harl2.0

CC		= c++
FLAGS	= -Wall -Wextra -Werror
RM		= rm -rf

GREEN		= "\e[92;5;118m"
YELLOW		= "\e[93;226m"
RESET		= "\e[0m"

SRC = main.cpp \
		Harl.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@clear
	@echo $(GREEN)"- Executable ready."$(RESET)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@echo $(YELLOW)"- Object files removed."$(RESET)

fclean: clean
	@$(RM) $(NAME)
	@echo $(YELLOW)"- Executable removed."$(RESET)

re: fclean all

.PHONY: all clean fclean re
