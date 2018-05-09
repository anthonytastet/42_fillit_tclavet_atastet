#include "../libft/libft.h"
#include "../include/fillit.h"

/* 
** Set each tetriminos to the minimum y (up)
*/

static char		**go_up(int i_min, char **tab)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (i + i_min < 4)
	{
		tab[i] = tab[i + i_min];
		i++;
	}
	while (i < 4 && i_min > 0)
	{
		tab[i] = "....\0";
		i++;
	}
	return (tab);
}

/*
 ** Set each tetriminos to the minimum x possible (left)
 */

static char		**go_left(int j_min, char **tab)
{
	int tmp;
	int i;
	int j;

	tmp = 0;
	i = 0;
	j = 0;
	while (i < 4)
	{
		while (tab[i][j + j_min] != '\0')
		{
			tab[i][j] = tab[i][j + j_min];
			j++;
		}
		tmp = j_min;
		while (tmp > 0 && tmp > 0)
		{
			tab[i][4 - tmp] = '.';
			tmp--;
		}
		j = 0;
		i++;
	}
	return (tab);
}

/*
 ** Arrange each tetriminos left and up;
 */

t_tetrimino		*arrange_tet(t_tetrimino *lst)
{
	t_tetrimino *start;

	start = lst;
	while (lst->next)
	{
		lst->tetrimino = go_left(lst->x, lst->tetrimino);
		lst->tetrimino = go_up(lst->y, lst->tetrimino);
		lst->y = 0;
		lst->x = 0;
		lst = lst->next;
	}
	return (start);
}
