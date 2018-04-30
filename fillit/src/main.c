#include "libft.h"
#include "fillit.h"

int	main(int argc, char **argv)
{
	int fd;

	if (argc =! 2)
	{
		return (-1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		ft_putstr("Opening failde");
	read_tetriminos(fd);
	return (0);
}
