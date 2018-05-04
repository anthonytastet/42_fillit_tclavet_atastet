#include "../libft/libft.h"
#include "../include/fillit.h"

int	main(int argc, char **argv)
{
	char 		**tab_tet;
	t_tetrimino *lst;
	t_tetrimino *lst_start;

	if (argc != 2)
	{
		ft_usage();
		return (-1);
	}
	tab_tet = read_tetriminos(argv[1]);
	printf("0 %s\n" ,tab_tet[0]);
	printf("1 %s\n" ,tab_tet[1]);
	printf("2 %s\n" ,tab_tet[3]);
	lst = make_lst_tetriminos(tab_tet);
	lst_start = lst;
	return (0);
}
