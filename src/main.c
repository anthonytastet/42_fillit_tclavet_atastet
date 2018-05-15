/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 10:37:45 by atastet           #+#    #+#             */
/*   Updated: 2018/05/15 18:42:25 by atastet          ###   ########.fr       */
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
	lst = lst_start;
	lst = arrange_tet(lst);
	grid = make_grid(lst_start, 3);
	while (grid[++i])
		ft_putendl(grid[i]);
	return (0);
}
