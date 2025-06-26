# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/02 20:19:00 by myli-pen          #+#    #+#              #
#    Updated: 2025/06/26 17:46:49 by myli-pen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.DEFAULT_GOAL = all
NAME = ../libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
MAKEFLAGS += --no-print-directory

SRCS =	ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_putnbr_fd.c \
		ft_bzero.c ft_isascii.c ft_memchr.c ft_memset.c ft_toupper.c \
		ft_calloc.c ft_isdigit.c ft_memcmp.c ft_putchar_fd.c \
		ft_isalnum.c ft_isprint.c ft_memcpy.c ft_putendl_fd.c \
		ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_tolower.c \
		ft_putstr_fd.c ft_striteri.c ft_strlen.c ft_strrchr.c \
		ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c \
		ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c \
		ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c \
		ft_lstclear_bonus.c ft_lstdelone_bonus.c \
		ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c \
		ft_lstnew_bonus.c ft_lstsize_bonus.c ft_printf.c ft_uitoa.c \
		ft_countdigits.c ft_strchrdup.c ft_get_next_line.c ft_vec.c \
		ft_vec_utils.c
OBJS = $(SRCS:.c=.o)

all: lib $(NAME) clean

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS)
	@echo "\033[1;33m [✔] libft.a created \033[0m"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[1;31m [-]\033[0m removed libft.a"

re: fclean all

lib:
	@echo "\033[1;32m [+]\033[0m compiling libft.a"

.PHONY: all clean fclean re lib
