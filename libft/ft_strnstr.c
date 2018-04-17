/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 13:58:37 by atastet           #+#    #+#             */
/*   Updated: 2018/04/17 14:45:10 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*cpy;
	int		i;

	i = ft_strlen(needle);
	if ((cpy = (char *)malloc(sizeof(*cpy) * (i + 1))) == NULL)
		return (NULL);
	cpy = ft_strncpy(cpy, needle, len);
	cpy = ft_strstr(haystack, (char *)cpy);
	return (cpy);
}
