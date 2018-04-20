/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 18:59:12 by atastet           #+#    #+#             */
/*   Updated: 2018/04/05 18:53:21 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;
	int		j;

	j = 0;
	i = ft_strlen(src);
	copy = (char*)malloc(sizeof(*copy) * (i + 1));
	while (src[j] != '\0')
	{
		copy[j] = src[j];
		j++;
	}
	copy[i] = '\0';
	return (copy);
}
