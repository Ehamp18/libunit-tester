# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/18 11:30:58 by elhampto          #+#    #+#              #
#    Updated: 2019/05/18 14:02:49 by elhampto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libunit.a

SRC = .

FRAMEWORK = 

VPATH = framework

OBJ_DOR = obj

OBJ = $(addsuffix .o, $(addprefix $(OBJ_DOR)/, $(FRAMEWORK)))

INC = -I includes

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I $(INC)


all: $(OBJ_DOR) $(NAME)

$(OBJ_DOR):
	@echo "\033[32mmaking objects...\033[0m"
	@mkdir -p $(OBJ_DOR)

$(OBJ_DOR)/%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@make -C libft
	@echo 
	@ar -rcs $@ $^

clean:
	@make clean -C libft
	@/bin/rm -rf $(OBJ_DOR)

fclean: clean
	@make fclean -C libft
	@/bin/rm -rf $(OBJ_DIR)
	@/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
