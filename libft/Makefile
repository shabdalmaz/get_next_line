# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/06 15:39:20 by ashabdan          #+#    #+#              #
#    Updated: 2020/09/22 15:44:52 by ashabdan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := gcc
CFLAGS := -Wall -Werror -Wextra
NAME := libft.a

INC_DIR := ./includes/
SRC_DIR := ./srcs/
OBJ_DIR := ./objs/
SUBDIRS := mem str ctype count conv io lst

SRC_DIRS := $(addprefix $(SRC_DIR), $(SUBDIRS))
SRCS := $(wildcard $(addsuffix /*.c, $(SRC_DIRS)))

OBJ_DIRS := $(addprefix $(OBJ_DIR), $(SUBDIRS))
OBJS := $(patsubst $(SRC_DIR)%, $(OBJ_DIR)%, $(SRCS:.c=.o))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIRS)
	@$(CC) -o $@ -c $< $(CFLAGS) -I $(INC_DIR)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all
