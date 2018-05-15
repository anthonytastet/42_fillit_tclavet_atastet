/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_lst_tetriminos.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 10:38:40 by atastet           #+#    #+#             */
/*   Updated: 2018/05/15 14:15:27 by atastet          ###   ########.fr       */
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

static void			fill_x(t_tetrimino *lst)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (lst->tetrimino[i][j] == '.')
	{
		j++;
		if (j == 4)
		{
			j = 0;
			i++;
		}
	}
	lst->y = i;
}

static void			fill_y(t_tetrimino *lst)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (lst->tetrimino[i][j] == '.')
	{
		i++;
		if (i == 4)
		{
			i = 0;
			j++;
		}
	}
	lst->x = j;
}

t_tetrimino			*make_lst_tetriminos(char **tab_tet)
{
	t_tetrimino	*lst_start;
	t_tetrimino	*lst;
	int			a;
	int			i;
	int			j;
	int			k;
	int			l;

	i = 0;
	k = 0;
	j = 0;
	l = 0;
	a = 65;
	if ((lst = (t_tetrimino*)malloc(sizeof(t_tetrimino))) == NULL)
		return (NULL);
	lst_start = lst;
	while (tab_tet[k])
	{
		if ((lst->tetrimino = (char**)malloc(sizeof(char*) * 5)) == NULL)
			return (NULL);
		lst->letter = a;
		if ((lst->tetrimino[i] = (char*)malloc(sizeof(char) * 5)) == NULL)
			return (NULL);
		while (tab_tet[k][l])
		{
			if (tab_tet[k][l] == '\n')
			{
				lst->tetrimino[i][j] = '\0';
				j = 0;
				i++;
				l++;
				if ((lst->tetrimino[i] = (char*)malloc(sizeof(char) * 5)) == NULL)
					return (NULL);
			}
			lst->tetrimino[i][j] = tab_tet[k][l];
			l++;
			j++;
		}
		lst->tetrimino[i] = NULL;
		a++;
		k++;
		j = 0;
		l = 0;
		i = 0;
		fill_x(lst);
		fill_y(lst);
		lst->next = new_lst();
		lst = lst->next;
	}
	lst->next = NULL;
	return (lst_start);
}
