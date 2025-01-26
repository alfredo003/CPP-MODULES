# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achivela <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/24 12:23:47 by achivela          #+#    #+#              #
#    Updated: 2025/01/24 12:23:49 by achivela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Account

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

GREEN		= "\e[92;5;118m"
YELLOW		= "\e[93;5;226m"
RESET		= "\e[0m"

SRC =   tests.cpp \
	Account.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@clear
	@echo $(GREEN)"- Executable ready."$(RESET)

clean:
	@$(RM) $(OBJ)
	@echo $(YELLOW)"- Object files removed."$(RESET)

fclean: clean
	@$(RM) $(NAME)
	@echo $(YELLOW)"- Executable removed."$(RESET)

re: fclean all

.PHONY: all clean fclean re
