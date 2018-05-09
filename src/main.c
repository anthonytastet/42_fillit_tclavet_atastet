/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 10:37:45 by atastet           #+#    #+#             */
/*   Updated: 2018/05/08 17:55:35 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../include/fillit.h"

int	main(int argc, char **argv)
{
	char 		**tab_tet;
	t_tetrimino	*lst;
	t_tetrimino	*lst_start;
	char		**grid;

	if (argc != 2)
	{
		ft_usage();
		return (-1);
	}
	if ((tab_tet = read_tetriminos(argv[1])) == NULL)
		return (0);
	int i;
	int j;
	j = 0;
	i = 0;
	lst = make_lst_tetriminos(tab_tet);
	free(tab_tet);
	lst_start = lst;
	//DELETE 
	while (lst->next)
	{
		dprintf(1, "lst->x %d\n", lst->x);
		dprintf(1, "lst->y %d\n", lst->y);
		dprintf(1, "lst->letter %c\n", lst->letter);
		dprintf(1,"lst 0 %s\n" ,lst->tetrimino[0]);
		dprintf(1,"lst 1 %s\n" ,lst->tetrimino[1]);
		dprintf(1,"lst 2 %s\n" ,lst->tetrimino[2]);
		dprintf(1,"lst 3 %s\n" ,lst->tetrimino[3]);
		dprintf(1,"lst 4 %s\n\n" ,lst->tetrimino[4]);
		lst = lst->next;
	}
	dprintf(1, "Hello\n");
	lst = lst_start; //MAYBE NOT USEFULL IF WE DELETE PRINT LST (Need a check)
	dprintf(1, "Hello\n");
	lst = arrange_tet(lst);
	dprintf(1, "Hello\n");
	while (lst->next)
	{
		dprintf(1, "lst->x %d\n", lst->x);
		dprintf(1, "lst->y %d\n", lst->y);
		dprintf(1, "lst->letter %c\n", lst->letter);
		dprintf(1,"lst 0 %s\n" ,lst->tetrimino[0]);
		dprintf(1,"lst 1 %s\n" ,lst->tetrimino[1]);
		dprintf(1,"lst 2 %s\n" ,lst->tetrimino[2]);
		dprintf(1,"lst 3 %s\n" ,lst->tetrimino[3]);
		dprintf(1,"lst 4 %s\n\n" ,lst->tetrimino[4]);
		lst = lst->next;
	}
	grid = make_grid(lst, 5);
	dprintf(1,"grid 0 %s\n" ,grid[0]);
	dprintf(1,"grid 1 %s\n" ,grid[1]);
	dprintf(1,"grid 2 %s\n" ,grid[2]);
	dprintf(1,"grid 3 %s\n" ,grid[3]);
	dprintf(1,"grid 4 %s\n" ,grid[4]);
	return (0);
}
