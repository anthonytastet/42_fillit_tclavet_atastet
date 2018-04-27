# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atastet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/05 19:19:17 by atastet           #+#    #+#              #
#    Updated: 2018/04/10 18:06:14 by atastet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_display_file
CC		= gcc
CFLAGS	= -Werror -Wextra -Wall
SRCS	= ft_display_file.c
OBJS	= $(SRCS:.c=.o)

all: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean fclean

clean:
	rm -Rf $(OBJS)

fclean: clean
	rm -Rf $(NAME)
