/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 15:30:16 by atastet           #+#    #+#             */
/*   Updated: 2018/05/15 15:57:15 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../include/fillit.h"

/*
* Fill the grid with points
*/

static char	**fill_grid_point(char **grid, int size_grid)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (i < size_grid - 1)
	{
		if ((grid[i] = (char*)malloc(sizeof(char) * size_grid)) == NULL)
			return (NULL);
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

/*
* Writes a tetrimino on a place (x, y) with the good letter associated
*/

static void	write_tet(t_tetrimino *lst, char **grid, int x, int y, char c)
{
	int		i;
	int		j;

	i = 0;
	while (i < lst->height)
	{
		j = 0;
		while (j < lst->width)
		{
			if (lst->tetrimino[i][j] == '#')
				grid[y + i][x + j] = c;
			j++;
		}
		i++;
	}
}

/*
* Test if a Tetrimino can be placed on the map at a set place (x, y)
* Writes it on the place if it is possible
*/

static int	set_tet(t_tetrimino *lst, char **grid, int x, int y)
{
	int		i;
	int		j;

	i = 0;
	while (i < lst->height)
	{
		j = 0;
		while (j < lst->width)
		{
			if (lst->tetrimino[i][j] == '#' && grid[y + i][x + j] != '.')
				return (0);
			j++;
		}
		i++;
	}
	write_tet(lst, grid, x, y, lst->letter);
	return (1);
}

static int	solve_grid(char **grid, t_tetrimino *lst, int size_grid)
{
	int			i;
	int			j;
	t_tetrimino	*tet;

	i = 0;
	tet = lst;
	if (lst == NULL)
		return (1);
	while (i < size_grid - lst->height)
	{
		j = 0;
		//dprintf(1, "i : %d\n", i);
		while (j < size_grid - lst->width)
		{
			//dprintf(1, "j : %d\n", j);
			if (set_tet(tet, grid, j, i) == 1)
			{
				/*//DELETER
				dprintf(1,"grid 0 %s\n" ,grid[0]);
				dprintf(1,"grid 1 %s\n" ,grid[1]);
				dprintf(1,"grid 2 %s\n" ,grid[2]);
				dprintf(1,"grid 3 %s\n" ,grid[3]);
				if (j > 4)
					dprintf(1,"grid 4 %s\n\n" ,grid[4]);*/
				if (solve_grid(grid, tet->next, size_grid) == 1)
					return (1);
					else
						write_tet(tet, grid, j, i, '.');
			}
			j++;
		}
		i++;
	}
	return (0);
}

char		**make_grid(t_tetrimino *lst, int size_grid)
{
	char		**grid;
	int			size;

	size = size_grid;
	if ((grid = (char**)malloc(sizeof(char*) * size)) == NULL)
		return (NULL);
	grid = fill_grid_point(grid, size);
	while (solve_grid(grid, lst, size) == 0)
	{
		size++;
		grid = fill_grid_point(grid, size);
	}
	return (grid);
}
