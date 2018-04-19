/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 18:52:54 by atastet           #+#    #+#             */
/*   Updated: 2018/04/17 19:21:21 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst2;
	unsigned char	*src2;
	
	dst2 = (unsigned char*)dst;
	src2 = (unsigned char*)src;
	while (n > 0 && *src2 != (unsigned char)c)
	{
		n--;
		*dst2 = *src2;
		src2++;
		dst2++;
	}
	if (n > 0) 
	{
		*dst2 = *src2;
		return ((void*)dst2);
	}
	else
		return (NULL);			
}
