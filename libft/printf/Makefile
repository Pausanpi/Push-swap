# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/27 10:41:33 by pausanch          #+#    #+#              #
#    Updated: 2024/09/23 12:53:18 by pausanch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE = ft_decimal.c\
	ft_hexa.c\
	ft_pointer.c\
	ft_printf.c\
	ft_putchar.c\
	ft_string.c\
	ft_unsigned.c
	
OBJ = $(SOURCE:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all:	$(OBJ)

.c.o:
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS)

clean:
	@rm -f $(OBJ)


re: clean all

.PHONY: re all clean