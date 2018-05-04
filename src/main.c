#include "../libft/libft.h"
#include "../include/fillit.h"

int	main(int argc, char **argv)
{
	char 		**tab_tet;
	//t_tetrimino *lst;
	//t_tetrimino *lst_start;

	if (argc != 2)
	{
		ft_usage();
		return (-1);
	}
	tab_tet = read_tetriminos(argv[1]);
	int i;
	int j;
	j = 0;
	i = 0;
	printf("tab 3 20 %c\n", tab_tet[7][20]);
	while (tab_tet[i])
	{
		while (tab_tet[i][j])
		{
			printf("%c", tab_tet[i][j]);
			j++;
		}
		j = 0;
		i++;
		printf("tet %d\n", i);
	}
	printf("TEST");
	//test(tab_tet);
	make_lst_tetriminos(tab_tet);
	//lst_start = lst;
	/*while (lst->next)
	{
		printf("lst 0 %s\n" ,lst->tetrimino[0]);
		printf("lst 1 %s\n" ,lst->tetrimino[1]);
		printf("lst 2 %s\n" ,lst->tetrimino[2]);
		printf("lst 3 %s\n" ,lst->tetrimino[3]);
		printf("lst 4 %s\n" ,lst->tetrimino[4]);
		lst = lst->next;
	}*/
	return (0);
}
