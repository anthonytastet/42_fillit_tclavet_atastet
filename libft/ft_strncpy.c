/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 13:13:20 by atastet           #+#    #+#             */
/*   Updated: 2018/04/10 14:36:53 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src == NULL || dst == NULL)
		return (NULL);
	while (src[i] != '\0' && i <= len)
	{
		dst[i] = src[i];
		i++;
	}
	while (src[i] != '\0')
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
