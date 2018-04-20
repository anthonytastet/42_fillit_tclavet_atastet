/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 11:19:32 by atastet           #+#    #+#             */
/*   Updated: 2018/04/05 12:04:49 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*rng;
	int	i;
	int	len;

	if (min >= max)
		return (NULL);
	i = 0;
	len = max - min;
	rng = (int*)malloc(sizeof(*rng) * (len + 1));
	while (max > min)
	{
		rng[i] = min;
		min++;
		i++;
	}
	rng[i] = '\0';
	return (rng);
}
