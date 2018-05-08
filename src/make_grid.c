/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 15:30:16 by atastet           #+#    #+#             */
/*   Updated: 2018/05/08 18:08:31 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../include/fillit.h"

static char	**fill_grid_point(char **grid, int size_grid)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (i < size_grid - 1)
	{
		while (j < size_grid - 1)
		{
			grid[i][j] = '.';
			j++;
		}
		grid[i][j] = '\0';
		i++;
		j = 0;
	}
	grid[i] = NULL;
	return (grid);
}

static int	solve_grid(char **grid, t_tetrimino *lst, int size_grid)
{
	int		i;
	int		j;
	int		k;
	int		l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (grid[i][j] == '.')
	{
		j++;
		if (j == size_grid - 1)
		{
			j = 0;
			i++;
		}
		if (grid[i] == NULL)
			return (0);
	}
	lst = NULL;
	return (0);
}

char		**make_grid(t_tetrimino *lst, int size_grid)
{
	char	**grid;

	//DELETE 
	lst = NULL;
	if ((grid = (char**)malloc(sizeof(char*) * size_grid)) == NULL)
		return (NULL);
	if ((*grid = (char*)malloc(sizeof(char) * size_grid)) == NULL)
		return (NULL);
	grid = fill_grid_point(grid, size_grid);
	//if (solve_grid(grid, lst, size_grid) == 0)
	//	make_grid(lst, size_grid + 1);
	return (grid);
}
