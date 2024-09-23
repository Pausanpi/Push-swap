# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 16:42:06 by pausanch          #+#    #+#              #
#    Updated: 2024/09/23 12:03:06 by pausanch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

###################################################################

SOURCE = ft_isalpha.c ft_isdigit.c ft_isalnum.c\
		ft_isascii.c ft_isprint.c ft_strlen.c\
		ft_memset.c ft_bzero.c ft_memcpy.c\
		ft_memmove.c ft_strlcpy.c ft_strlcat.c\
		ft_toupper.c ft_tolower.c ft_strchr.c\
		ft_strrchr.c ft_strncmp.c ft_memchr.c\
		ft_memcmp.c ft_strnstr.c ft_atoi.c\
		ft_calloc.c ft_strdup.c ft_substr.c\
		ft_strjoin.c ft_putchar_fd.c ft_putendl_fd.c\
		ft_putnbr_fd.c ft_putstr_fd.c ft_strtrim.c\
		ft_itoa.c ft_striteri.c ft_split.c\
		ft_strmapi.c

SOURCE_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
				ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
				ft_lstclear.c ft_lstiter.c ft_lstmap.c

##################################################################

OBJ = $(SOURCE:.c=.o)

OBJ_BONUS = $(SOURCE_BONUS:.c=.o)

OBJ_PRINTF = $(addprefix printf/, ft_printf.o ft_hexa.o ft_decimal.o ft_pointer.o ft_putchar.o ft_string.o ft_unsigned.o)

OBJ_GNL = $(addprefix get_next_line/, get_next_line.o get_next_line_utils.o)

###########################################

LIB = ar rcs

all: $(NAME)

####################################
.c.o: $(SOURCE) $(SOURCE_BONUS)
	@clang $(CFLAGS) -c $(SOURCE) $(SOURCE_BONUS)
####################################
	
#$(NAME): $(OBJ)
#	$(LIB) $(NAME) $(OBJ) $(OBJ_PRINTF) $(OBJ_GNL)
#	@echo "Libreria lista"
	
$(NAME):	$(OBJ) $(OBJ_BONUS)
	@make -C printf
	@make -C get_next_line
	@$(LIB) $(NAME) $(OBJ) $(OBJ_BONUS) $(OBJ_PRINTF) $(OBJ_GNL)
	
clean:
	@make -C printf clean
	@make -C get_next_line clean
	@rm -f $(OBJ) $(OBJ_BONUS) $(OBJ_PRINTF) $(OBJ_GNL)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: re all clean fclean bonus