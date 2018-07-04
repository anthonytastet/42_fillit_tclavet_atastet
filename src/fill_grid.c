/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclavet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 16:17:33 by tclavet           #+#    #+#             */
/*   Updated: 2018/07/03 20:17:56 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

char	**fill_grid_point(char **grid, int size_grid)
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
