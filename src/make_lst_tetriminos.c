/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_lst_tetriminos.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 10:38:40 by atastet           #+#    #+#             */
/*   Updated: 2018/05/08 18:08:01 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../include/fillit.h"


static t_tetrimino	*new_lst(void)
{
	t_tetrimino *lst;
	
	if ((lst = (t_tetrimino*)malloc(sizeof(t_tetrimino))) == NULL)
		return (NULL);	
	return (lst);
}

static void			fill_xy(t_tetrimino *lst)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (lst->tetrimino[i][j] == '.')
	{
		j++;
		if ( j == 4)
		{
			j = 0;
			i++;
		}
	}
	lst->x = j;
	lst->y = i;
}

int					get_width(char **tet)
{
	int			width;

	width = 2;
	if (tet[0][0] == '#' && tet[1][2] == '#')
		return (3);
	if (tet[0][3] == '#')
		return (4);
	if (tet[0][2] == '#' && tet[1][0] == '#')
		return(3);
	if (tet[0][1] == '.')
		return (1);
	return (width);
}

int					get_height(char **tet)
{
	int			i;
	int			j;
	int			count;

	count = 0;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tet[i][j] == '#')
				count++;
			if (count == 4)
				return (i + 1);
			j++;
		}
		i++;
	}
	return (0);
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
		if	((lst->tetrimino[i] = (char*)malloc(sizeof(char) * 5)) == NULL)
			return NULL;
		while (tab_tet[k][l])
		{
			if (tab_tet[k][l] == '\n')
			{	
				lst->tetrimino[i][j] = '\0';
				j = 0;
				i++;
				l++;
				if ((lst->tetrimino[i] = (char*)malloc(sizeof(char) * 5)) == NULL)
					return NULL;
			}
			lst->tetrimino[i][j] = tab_tet[k][l];
			l++;
			j++;
		}
		lst->tetrimino[i] = NULL;
		A++;
		k++;
		j = 0;
		l = 0;
		i = 0;
		fill_xy(lst);
		lst->next = new_lst();
		lst = lst->next;
	}		
	lst->next = NULL;
	return	(lst_start);
}
