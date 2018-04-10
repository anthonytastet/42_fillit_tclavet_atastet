/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 10:55:29 by atastet           #+#    #+#             */
/*   Updated: 2018/04/10 11:38:17 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strdup(char *str)
{
	int i;
	char *cpy;
	int j;

	j = 0;
	i = ft_strlen(str);
	cpy = (char *)malloc(sizeof(*str) * (i + 1));
	while (str[j])
	{
		cpy[j] = str[j];
		j++;
	}
	cpy[j] = '\0';
	return (cpy);
}
