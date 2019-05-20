# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/18 21:00:31 by elhampto          #+#    #+#              #
#    Updated: 2019/05/19 21:13:01 by elhampto         ###   ########.fr        #
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

-include $(DEP)

$(OBJ_DOR)/%.o: %.c
	@$(CC) $(CFLAGS) -MMD -c $< -o $@

$(NAME): $(OBJ)
	@echo "\033[32mmaking libft...\033[0m"
	@make -C libft
	@ar -rcs $@ $^

clean:
	@echo "\033[33mcleaning libft repository...\033[0m"
	@make clean -C libft
	@/bin/rm -rf $(OBJ) $(DEP)

fclean: clean
	@echo "\033[33mremoving libft library file...\033[0m"
	@make fclean -C libft
	@/bin/rm -rf $(OBJ_DOR)
	@/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
