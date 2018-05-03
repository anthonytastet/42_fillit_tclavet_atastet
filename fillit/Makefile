# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atastet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/10 10:37:46 by atastet           #+#    #+#              #
#    Updated: 2018/04/27 12:03:08 by atastet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	fillit

SRC_PATH	=	src/

SRC		=	main.c \
			ft_usage.c \
			read_tetriminos.c \
			simple_check.c \
			second_check.c \

SRC_POS		= 	$(addprefix $(SRC_PATH),$(SRC))

OBJS 		= 	$(SRC:.c=.o)

LIBFT		=	libft/libft.a

CC		=	gcc

CFLAGS		=	-Wall -Wextra -Werror

all :	$(NAME)

$(NAME) : $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(LIBFT)

$(OBJS) : $(LIBFT)
	$(CC) $(CFLAGS) -c $(SRC_POS) 

$(LIBFT) : 
	make re -C ./libft/

clean : 
	rm -f $(OBJS)
	make clean -C ./libft/

fclean : clean
	rm -f $(NAME)
	make fclean -C ./libft/

re : fclean all

.PHONY : all re clean fclean	
