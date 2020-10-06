# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/05 00:11:36 by ashabdan          #+#    #+#              #
#    Updated: 2020/10/05 18:08:38 by ashabdan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := gcc
CFLAGS := -Wall -Werror -Wextra
NAME := gnl

INC_DIR := ./includes/
SRC_DIR := ./srcs/
OBJ_DIR := ./objs/
LIBFT := ./libft/

SRCS := $(wildcard $(addsuffix *.c, $(SRC_DIR)))
OBJS := $(patsubst $(SRC_DIR)%, $(OBJ_DIR)%, $(SRCS:.c=.o))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@make -s -C $(LIBFT)
	@$(CC) $(OBJS) $(addsuffix libft.a, $(LIBFT)) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) -o $@ -c $^ $(CFLAGS) -I $(INC_DIR)

clean:
	@rm -rf $(OBJ_DIR)
	@make -C $(LIBFT) clean

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT) fclean

re: fclean all
	