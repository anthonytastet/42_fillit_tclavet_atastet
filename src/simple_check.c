/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 15:10:51 by atastet           #+#    #+#             */
/*   Updated: 2018/07/04 15:10:54 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

static	int		check_char(char *buf)
{
	int		i;

	i = 0;
	while (buf[i])
	{
		if (buf[i] != '.' && buf[i] != '#' && buf[i] != '\n')
			return (-1);
		i++;
	}
	return (0);
}

static	int		check_4x4(char *buf, int i, int x, int y)
{
	while (buf[i])
	{
		if (buf[i] == '\n' | buf[i] == '\0')
		{
			if (y != 5)
				return (-1);
			y = 0;
		}
		while (buf[i] != '\n')
		{
			x++;
			i++;
			if (x > 4)
				return (-1);
		}
		if (x != 4 && x != 0)
			return (-1);
		x = 0;
		y++;
		i++;
	}
	if (y != 5)
		return (-1);
	return (0);
}

int				simple_check(char *buf)
{
	int		ret;

	if ((ret = check_char(buf)) == -1)
	{
		ft_putstr("error\n");
		return (-1);
	}
	if ((ret = check_4x4(buf, 0, 0, 1)) == -1)
	{
		ft_putstr("error\n");
		return (-1);
	}
	else
		return (0);
}
