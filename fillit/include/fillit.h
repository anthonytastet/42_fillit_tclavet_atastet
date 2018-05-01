#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include "../libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct		s_tetrimino
{
	char			**tetrimino;
	char			letter;
	int			x;
	int			y;
	struct	s_tetrimino	*next;
}	

void			ft_usage(void);	
#endif
