# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 10:42:23 by pausanch          #+#    #+#              #
#    Updated: 2024/09/23 12:53:25 by pausanch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE = get_next_line.c\
	get_next_line_utils.c

OBJ = $(SOURCE:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all:	$(OBJ)

.c.o:
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS)

clean:
	@rm -f $(OBJ)


re: clean all

.PHONY: re all clean