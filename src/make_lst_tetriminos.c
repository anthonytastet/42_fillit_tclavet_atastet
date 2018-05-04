#include "../libft/libft.h"
#include "../include/fillit.h"


static t_tetrimino	*new_lst(void)
{
	t_tetrimino *lst;
	
	if ((lst = (t_tetrimino*)malloc(sizeof(t_tetrimino))) == NULL)
		return (NULL);	
	return (lst);
}

t_tetrimino	*make_lst_tetriminos(char **tab_tet)
{
	t_tetrimino	*lst_start;
	t_tetrimino	*lst;
	int			A;
	int			i;
	int			j;
	int			k;
	int			l;

	i = 0;
	k = 0;
	j = 0;
	l = 0;
	A = 65;
	if ((lst = (t_tetrimino*)malloc(sizeof(t_tetrimino))) == NULL)
		return (NULL);
	lst_start = lst;
	while (tab_tet[k])
	{
		if	((lst->tetrimino = (char**)malloc(sizeof(char*) * 5)) == NULL)
			return NULL;
		lst->letter = A;
		A++;
		while (tab_tet[k][l])
		{
			if	((lst->tetrimino[i] = (char*)malloc(sizeof(char) * 5)) == NULL)
				return NULL;
			if (tab_tet[k][l] == '\n')
			{	
				lst->tetrimino[i][j] = '\0';
				j = 0;
				i++;
				l++;
			}
			lst->tetrimino[i][j] = tab_tet[k][l];
			l++;
			j++;
		}
		lst->tetrimino[i] = NULL;
		k++;
		lst->next = new_lst();
	}		
	lst->next = NULL;
	return	(lst_start);
}
