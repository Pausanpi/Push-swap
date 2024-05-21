# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/10 12:20:18 by pausanch          #+#    #+#              #
#    Updated: 2024/05/21 05:56:48 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BONUS = checker
CFLAGS = -Wall -Werror -Wextra
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

SRC_BONUS_DIR = src_bonus/
SRC_BONUS = checker.c\
			utils_bonus.c\
			algorithm.c\
			cost.c\
			input_check.c\
			position.c\
			push.c\
			rev_rotate.c\
			rotate.c\
			steps.c\
			swap.c\
			utils.c\
		
OBJ_DIR = src/
OBJS = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))

OBJ_BONUS_DIR = src_bonus/
OBJS_BONUS = $(addprefix $(OBJ_BONUS_DIR), $(SR_BONUS:.c=.o))

LIBFT = ./libft/libft.a

all: $(LIBFT) $(NAME)

bonus: $(LIBFT) $(NAME_BONUS)

$(NAME): $(OBJS) $(LIBFT)
	@gcc $(OBJS) $(LIBFT) -o $(NAME)

$(NAME_BONUS): $(OBJS_BONUS) $(LIBFT)
	@gcc $(OBJS_BONUS) $(LIBFT) -o $(NAME_BONUS)

$(LIBFT):
	@make -C ./libft

.c.o:
#	@cc $(CFLAGS) -c $< -o $(<:.c=.o)
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS) && printf "Compiling: $(notdir $<)\n"

clean:
	@rm -rf $(OBJS) $(OBJS_BONUS) $(LIBFT)
	@make -C ./libft clean

libclean:
	@make -C ./libft fclean

fclean: clean
	@rm -rf $(NAME) $(NAME_BONUS)

re: fclean all

.PHONY: clean fclean re all bonus libclean .c.o