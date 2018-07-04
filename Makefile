# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atastet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/04 15:00:29 by atastet           #+#    #+#              #
#    Updated: 2018/07/04 15:04:23 by atastet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fillit

SRC_PATH	=	src/

SRC		=	main.c \
			ft_usage.c \
			read_tetriminos.c \
			simple_check.c \
			second_check.c \
			make_lst_tetriminos.c \
			make_grid.c \
			arrange_tet.c \
			get_size.c \
			fill_grid.c

SRC_POS		= $(addprefix $(SRC_PATH),$(SRC))

OBJS	=	$(SRC_POS:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror -I./libft/ -I./

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			make -C libft
			$(CC) $(CFLAGS) $(OBJS) -L libft -lft -o $(NAME)

%.o		:	$(SRC_PATH)%.c
			$(CC) -o $@ -c $< $(CFLAGS)

clean	:
			rm -rf $(OBJS)
			make clean -C libft

fclean	:
			rm -rf $(OBJS) $(NAME)
			make fclean -C libft

re		:	fclean all

.PHONY	:	all clean fclean re
