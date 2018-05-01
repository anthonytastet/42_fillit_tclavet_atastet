#include "../libft/libft.h"
#include "../include/fillit.h"

int	main(int argc, char **argv)
{
	int fd;

	if (argc != 2)
	{
		ft_usage();
		return (-1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		ft_putstr("open() failed\n");
	read_tetriminos(fd);
	return (0);
}
