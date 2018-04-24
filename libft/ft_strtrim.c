/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 18:04:14 by atastet           #+#    #+#             */
/*   Updated: 2018/04/24 10:24:14 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_countspace(const char *s)
{
	int		i;
	size_t	nb_sp;

	i = 0;
	nb_sp = 0;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			nb_sp++;
		i++;
	}
	printf("nb_sp = %zu\n", nb_sp);
	return (nb_sp);
}

char	*ft_strtrim(const char *s)
{
	size_t	len;
	char	*trim;
	size_t	i;
	size_t	j;
	size_t	nb_sp;

	nb_sp = ft_countspace(s);
	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	len = ft_strlen(s) - nb_sp;
	if ((trim = malloc(sizeof(*trim) * len)) == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] != '\0')
			i++;
		trim[j] = s[i];
		j++;
		i++;
	}
	trim[j] = '\0';
	return (trim);
}
