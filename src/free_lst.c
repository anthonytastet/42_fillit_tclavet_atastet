#include "../libft/libft.h"
#include "../include/fillit.h"

void	free_lst(t_tetrimino *lst)
{
	t_tetrimino *lst_start;

	lst_start = lst;
	while (lst->next)
	{
		ft_putendl(lst->tetrimino[0]);
		free(lst->tetrimino[0]);
		ft_putendl(lst->tetrimino[1]);
		free(lst->tetrimino[1]);
		ft_putendl(lst->tetrimino[2]);
		free(lst->tetrimino[2]);
		ft_putendl(lst->tetrimino[3]);
		//free(lst->tetrimino[3]);
		free(lst->tetrimino[4]);
		lst = lst->next;
	}
	while (lst_start->next)
	{
		free(lst_start->tetrimino);
		lst_start = lst_start->next;
	}
}

void	free_grid(char **grid)
{
	int i;
	
	i = 0;
	while (grid[i])
	{
		free(grid[i]);
		i++;
	}
}
