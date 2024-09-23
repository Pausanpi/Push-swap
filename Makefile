# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/10 12:20:18 by pausanch          #+#    #+#              #
#    Updated: 2024/09/23 12:52:52 by pausanch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BONUS = checker
CFLAGS = -Wall -Werror -Wextra
DATE = $(shell /usr/bin/date)
CC = clang
RM = rm -f

SRC_DIR = src/
SRC =	algorithm.c\
		cost.c\
		input_check.c\
		position.c\
		push_swap.c\
		push.c\
		rev_rotate.c\
		rotate.c\
		steps.c\
		swap.c\
		utils.c\

SRC_BONUS = src_bonus/checker.c\
			src_bonus/utils_bonus.c\
			src/algorithm.c\
			src/cost.c\
			src/input_check.c\
			src/position.c\
			src/push.c\
			src/rev_rotate.c\
			src/rotate.c\
			src/steps.c\
			src/swap.c\
			src/utils.c\
		
OBJ_DIR = src/
OBJS = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))

OBJS_BONUS = $(SRC_BONUS:.c=.o)

LIBFT = ./libft/libft.a

all: $(LIBFT) $(NAME)

bonus: $(LIBFT) $(NAME_BONUS)

$(NAME): $(OBJS) $(LIBFT)
	@$(CC) $(OBJS) $(LIBFT) -o $(NAME)

$(NAME_BONUS): $(OBJS_BONUS) $(LIBFT)
	@$(CC) $(OBJS_BONUS) $(LIBFT) -o $(NAME_BONUS)

$(LIBFT):
	@make -s -C ./libft

.c.o:
#	@cc $(CFLAGS) -c $< -o $(<:.c=.o)
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS) && printf "Compilando: $(notdir $<)\n"

clean:
	@rm -rf $(OBJS) $(OBJS_BONUS) $(LIBFT)
	@make -s -C ./libft clean

libclean:
	@make -s -C ./libft fclean

fclean: clean
	@rm -rf $(NAME) $(NAME_BONUS)

re: fclean all

git:
	git add .
	git commit -m "Daily sync $(DATE)"
	git push origin main

.PHONY: clean fclean re all bonus libclean .c.o
