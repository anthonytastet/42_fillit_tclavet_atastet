#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include "../libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define BUF_SIZE 4096
# include <stdio.h>

typedef struct		s_tetrimino
{
	char			**tetrimino;
	char			letter;
	int			x;
	int			y;
	struct	s_tetrimino	*next;
}			t_tetrimino;

void			ft_usage(void);
char			**read_tetriminos(char *argv);
int			simple_check(char *buf);
int			second_check(char **tab_tet, int nb_tet);
#endif
