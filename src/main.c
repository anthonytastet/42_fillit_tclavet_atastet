/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 10:37:45 by atastet           #+#    #+#             */
/*   Updated: 2018/05/19 16:22:40 by tclavet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../include/fillit.h"

int				main(int argc, char **argv)
{
	char		**tab_tet;
	t_tetrimino	*lst;
	t_tetrimino	*lst_start;
	char		**grid;
	int			i;

	i = -1;
	if (argc != 2)
	{
		ft_usage();
		return (-1);
	}
	if ((tab_tet = read_tetriminos(argv[1])) == NULL)
		return (0);
	lst = make_lst_tetriminos(tab_tet);
	lst_start = lst;
	free(tab_tet);
	lst = arrange_tet(lst);
	lst = lst_start;
	grid = make_grid(lst, 3);
	free_lst(lst_start);
	while (grid[++i])
		ft_putendl(grid[i]);
	free_grid(grid);
	while (1);
	return (0);
}
