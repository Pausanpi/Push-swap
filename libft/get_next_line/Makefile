# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 10:42:23 by pausanch          #+#    #+#              #
#    Updated: 2023/11/02 10:43:57 by pausanch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE = get_next_line.c\
	get_next_line_utils.c

OBJ = $(SOURCE:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all:	$(OBJ)

.c.o:	$(SOURCE)
	@gcc $(CFLAGS) -c $(SOURCE)

clean:
	@rm -f $(OBJ)


re: clean all

.PHONY: re all clean