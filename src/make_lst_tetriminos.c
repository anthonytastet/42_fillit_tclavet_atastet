/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_lst_tetriminos.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 10:38:40 by atastet           #+#    #+#             */
/*   Updated: 2018/05/08 13:06:02 by atastet          ###   ########.fr       */
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
		if	((lst->tetrimino[i] = (char*)malloc(sizeof(char) * 5)) == NULL)
			return NULL;
		while (tab_tet[k][l])
		{
			dprintf(1, "k = %d, l = %d, i = %d, j = %d \n", k, l, i, j);
			dprintf(1, "k = %d l = %d tab = %c\n",k, l, tab_tet[k][l]);
			if (tab_tet[k][l] == '\n')
			{	
				dprintf(1, "avant\n");
				if	((lst->tetrimino[i] = (char*)malloc(sizeof(char) * 5)) == NULL)
					return NULL;
				lst->tetrimino[i][j] = '\0';
				dprintf(1, "apres\n");
				j = 0;
				i++;
				l++;
				dprintf(1, "encore apres\n");
			}
			lst->tetrimino[i][j] = tab_tet[k][l];
			dprintf(1, "======>i = %d j = %d tab = %c\n",i, j, lst->tetrimino[i][j]);
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
