#include "../libft/libft.h"
#include "../include/fillit.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_usage();
		return (-1);
	}
	read_tetriminos(argv[1]);
	return (0);
}
