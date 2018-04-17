# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atastet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/10 10:37:46 by atastet           #+#    #+#              #
#    Updated: 2018/04/17 17:00:03 by atastet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS	=	ft_atoi.c	\
			ft_strcat.c	\
			ft_strcmp.c	\
			ft_strncmp.c \
			ft_strcpy.c	\
			ft_strdup.c	\
			ft_strlen.c	\
			ft_strncat.c \
			ft_strncpy.c \
			ft_isprint.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strstr.c \
		   	ft_strnstr.c \
		   	ft_strchr.c \
		   	ft_strrchr.c	

OBJS	=	$(SRCS:.c=.o)

CC	=	gcc

CFLAGS	=	-Wall -Wextra -Werror

all	:	$(NAME)

$(NAME)	:	$(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o	:	%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	rm -rf $(OBJS)

fclean	:	clean
	rm -rf $(NAME)

re	:	fclean all

.PHONY:	all clean fclean re
