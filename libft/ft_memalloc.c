/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmalloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 14:45:11 by atastet           #+#    #+#             */
/*   Updated: 2018/04/20 15:39:33 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *mem_fr;

	if ((mem_fr = (void *)malloc(sizeof(*mem_fr) * (size + 1))) == NULL)
		return (NULL);
	ft_bzero(mem_fr, size);
	return (mem_fr);
}
