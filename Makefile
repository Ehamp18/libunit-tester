# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/18 11:30:58 by elhampto          #+#    #+#              #
#    Updated: 2019/05/19 21:38:06 by elhampto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf_unit_test

SHORT = 00_basic_test_1.c\
		00_basic_test_2.c\
		00_basic_test_3.c\
		00_basic_test_4.c\
		00_basic_test_5.c\
		00_basic_test_6.c\
		00_basic_test_7.c\
		00_basic_test_8.c\

MEDIUM = 01_basic_test_1.c\
		01_basic_test_2.c\
		01_basic_test_3.c\
		01_basic_test_4.c\
		01_basic_test_5.c\
		01_basic_test_6.c\
		01_basic_test_7.c\
		01_basic_test_8.c\

LONG = 02_basic_test_1.c\
		02_basic_test_2.c\
		02_basic_test_3.c\
		02_basic_test_4.c\
		02_basic_test_5.c\
		02_basic_test_6.c\
		02_basic_test_7.c\
		02_basic_test_8.c\

EXTRA = 03_basic_test_1.c\
		03_basic_test_2.c\
		03_basic_test_3.c\

VPATH = test_function/00_short_test:\
		test_function/01_medium_test:\
		test_function/02_long_test:\
		test_function/003_extra_test

OBJ_DOR = obj

OBJ  = $(addsuffix .o, $(addprefix $(OBJ_DIR)/, $(SHORT)))
OBJ += $(addsuffix .o, $(addprefix $(OBJ_DIR)/, $(MEDIUM)))
OBJ += $(addsuffix .o, $(addprefix $(OBJ_DIR)/, $(LONG)))
OBJ += $(addsuffix .o, $(addprefix $(OBJ_DIR)/, $(EXTRA)))

DEP = $(OBJ:%.o=%.d)

INC =	-I includes\
		-I ./libft \

LIB =	-L ./framework -lunit \
		-L ./libft -lft \

CC = gcc

CFLAGS = -Wall -Werror -Wextra $(INC)

MAKEOPTS = -j4

all: $(OBJ_DOR) $(NAME)
$(OBJ_DOR):
	@echo "\033[32mmaking objects...\033[0m"
	@mkdir -p $(OBJ_DOR)

-include $(DEP)

$(OBJ_DOR)/%.o: %.c | $(OBJ_DIR)
	@echo "\033[32mCompiling: \e[0m%s\n" $<
	@$(CC) $(CFLAGS) -MMD -c $< -o $@

$(NAME): $(OBJ)
	@make -C libft
	@make -C ./framework
	@$(CC) $^ -o $@ $(LIB)

clean:
	@echo "\033[33mcleaning objects...\033[0m"
	@make clean -C libft
	@make clean -C ./framework
	@/bin/rm -rf $(OBJ)

fclean: clean
	@echo "\033[33mremoving executable...\033[0m"
	@make fclean -C libft
	@make -C ./framework fclean
	@/bin/rm -rf $(OBJ_DOR)
	@/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
