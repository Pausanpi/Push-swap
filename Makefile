# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/10 12:20:18 by pausanch          #+#    #+#              #
#    Updated: 2024/01/25 17:09:41 by pausanch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

SRC_DIR = src/
SRC = handle_errors.c init_a_to_b.c init_b_to_a.c\
		push_swap.c push.c rev_rotate.c rotate.c\
		sort_stacks.c sort_three.c\
		stack_init.c stack_utils.c swap.c stack_utils2.c
OBJ_DIR = src/
OBJS = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))

LIBFT = ./libft/libft.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	@gcc $(OBJS) $(LIBFT) -o $(NAME)
	@echo "PUSH SWAP COMPILADO"

$(LIBFT):
	@make -C ./libft
	@echo "LIBFT COMPILADO"

.c.o:
	@cc $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
	@rm -rf $(OBJS) $(LIBFT)
	@make -C ./libft clean

libclean:
	@make -C ./libft fclean

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all libclean .c.o