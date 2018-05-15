/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 11:14:39 by atastet           #+#    #+#             */
/*   Updated: 2018/05/15 15:34:53 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"
#include "../libft/libft.h"

int				get_width(char **tet)
{
	int			x;
	int			y;
	int			width;
	x = 0;
	y = 0;
	width = 0;
	while (y < 4)
	{
		while (x < 4)
		{
			if (tet[y][x] == '#' &&  (x + 1) > width)
				width = x + 1;
			x++;
		}
		x = 0;
		y++;
	}
	return (width);
}

int				get_height(char **tet)
{
	int			i;
	int			j;
	int			count;

	count = 0;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tet[i][j] == '#')
				count++;
			if (count == 4)
				return (i + 1);
			j++;
		}
		i++;
	}
	return (0);
}
