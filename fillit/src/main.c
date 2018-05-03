#include "../libft/libft.h"
#include "../include/fillit.h"

int	main(int argc, char **argv)
{
	char **tab_tet;
	
	if (argc != 2)
	{
		ft_usage();
		return (-1);
	}
	tab_tet = read_tetriminos(argv[1]);
	return (0);
}
