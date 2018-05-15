/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 11:14:39 by atastet           #+#    #+#             */
/*   Updated: 2018/05/15 11:19:59 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"
#include "../libft/libft.h"

int					get_width(char **tet)
{
	int			width;

	width = 2;
	if (tet[0][0] == '#' && tet[1][2] == '#')
		return (3);
	if (tet[0][3] == '#')
		return (4);
	if (tet[0][2] == '#' && tet[1][0] == '#')
		return(3);
	if (tet[0][1] == '.')
		return (1);
	return (width);
}

int					get_height(char **tet)
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
