/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_lst_tetriminos.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 10:38:40 by atastet           #+#    #+#             */
/*   Updated: 2018/05/15 16:56:31 by atastet          ###   ########.fr       */
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

static int			fill_tetriminos(char **tab_tet, int k, int l, t_tetrimino *lst)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab_tet[k][l])
	{
		if (tab_tet[k][l] == '\n')
		{
			lst->tetrimino[i][j] = '\0';
			j = 0;
			i++;
			l++;
			if ((lst->tetrimino[i] = (char*)malloc(sizeof(char) * 5)) == NULL)
				return (0);
		}
		lst->tetrimino[i][j] = tab_tet[k][l];
		l++;
		j++;
	}
	return (i);
}

static int			end_of_tet(t_tetrimino **lst, int *i, int a)
{
		(*lst)->tetrimino[*i] = NULL;
		a++;
		fill_x(*lst);
		fill_y(*lst);
		(*lst)->next = new_lst();
		(*lst) = (*lst)->next;
		*i = 0;
		return (a);
}

t_tetrimino			*make_lst_tetriminos(char **tab_tet)
{
	t_tetrimino	*lst_start;
	t_tetrimino	*lst;
	int			a;
	int			i;
	int			k;

	i = 0;
	k = -1;
	a = 65;
	if ((lst = (t_tetrimino*)malloc(sizeof(t_tetrimino))) == NULL)
		return (NULL);
	lst_start = lst;
	while (tab_tet[++k])
	{
		if ((lst->tetrimino = (char**)malloc(sizeof(char*) * 5)) == NULL)
			return (NULL);
		lst->letter = a;
		if ((lst->tetrimino[i] = (char*)malloc(sizeof(char) * 5)) == NULL)
			return (NULL);
		i = fill_tetriminos(tab_tet, k , 0, lst);
		a = end_of_tet(&lst, &i, a);
	}
	lst->next = NULL;
	return (lst_start);
}
