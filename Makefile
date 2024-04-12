# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/10 12:20:18 by pausanch          #+#    #+#              #
#    Updated: 2024/04/11 18:27:58 by pausanch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
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
		
OBJ_DIR = src/
OBJS = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))

LIBFT = ./libft/libft.a

all: $(LIBFT) $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	@gcc $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	@make -C ./libft

.c.o:
#	@cc $(CFLAGS) -c $< -o $(<:.c=.o)
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS) && printf "Compiling: $(notdir $<)\n"

clean:
	@rm -rf $(OBJS) $(LIBFT)
	@make -C ./libft clean

libclean:
	@make -C ./libft fclean

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all libclean .c.o