/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_lst_tetriminos.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 10:38:40 by atastet           #+#    #+#             */
/*   Updated: 2018/07/03 14:04:23 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

static t_tetrimino	*new_lst(void)
{
	t_tetrimino *lst;

	if ((lst = (t_tetrimino*)malloc(sizeof(t_tetrimino))) == NULL)
		return (NULL);
	return (lst);
}

static int			fill_tetriminos(char **tab, int k, int l, t_tetrimino *lst)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[k][l])
	{
		if (tab[k][l] == '\n')
		{
			lst->tetrimino[i][j] = '\0';
			j = 0;
			i++;
			l++;
			if ((lst->tetrimino[i] = (char*)malloc(sizeof(char) * 5)) == NULL)
				return (0);
		}
		lst->tetrimino[i][j] = tab[k][l];
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
		i = fill_tetriminos(tab_tet, k, 0, lst);
		a = end_of_tet(&lst, &i, a);
	}
	lst->next = NULL;
	return (lst_start);
}
