# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/02 20:18:54 by myli-pen          #+#    #+#              #
#    Updated: 2025/05/14 17:42:18 by myli-pen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.DEFAULT_GOAL = all
#NAME =
LIB = libft.a
TEST = main.c
CC = cc
CFLAGS = -Wall -Wextra -Werror
MAKEFLAGS += --no-print-directory
DIR_LIB = libft
DIR_INC = .
DIR_SRC = src
DIR_OBJ = obj

#SRCS = $(addprefix $(DIR_SRC)/, )
OBJS = $(patsubst $(DIR_SRC)/%.c, $(DIR_OBJ)/%.o, $(SRCS))

all: $(LIB) $(NAME)

$(LIB):
	@make -C $(DIR_LIB)

$(DIR_OBJ):
	@mkdir -p $(DIR_OBJ)

$(NAME): $(LIB) $(DIR_OBJ) $(OBJS)
	@cp $(LIB) $(NAME)
	@ar -rcs $(NAME) $(OBJS)
	@echo "\033[1;33m [✔] $(NAME) created \033[0m"

$(DIR_OBJ)/%.o: $(DIR_SRC)/%.c
	@$(CC) $(CFLAGS) -I$(DIR_INC) -c $< -o $@
	@echo "\033[1;32m [+]\033[0m compiling $@"

clean:
	@rm -rf $(DIR_OBJ)
	@echo "\033[1;31m [-]\033[0m removed OBJS"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[1;31m [-]\033[0m removed $(NAME)"
	@make fclean -C $(DIR_LIB)
	@rm -rf a.out

re: fclean all

test: $(NAME)
	@$(CC) -g $(CFLAGS) $(TEST) $(NAME)
	@echo ""
	@valgrind --leak-check=full --show-leak-kinds=all --track-fds=yes \
	--track-origins=yes ./a.out
	@rm -rf a.out

.SECONDARY: $(OBJS)
.PHONY: all clean fclean re test
