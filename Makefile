# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcohen <jcohen@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/25 15:36:55 by jcohen            #+#    #+#              #
#    Updated: 2024/05/25 15:51:10 by jcohen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes
SRC_DIR = srcs
INCLUDES_DIR = includes
SRC_FILES = $(SRC_DIR)/ft_printf.c
OBJ_FILES = $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
    $(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
    $(CC) $(CFLAGS) -c -o $@ $<

clean:
    rm -f $(OBJ_FILES)

fclean: clean
    rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
