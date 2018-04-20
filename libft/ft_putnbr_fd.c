/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 13:39:34 by atastet           #+#    #+#             */
/*   Updated: 2018/04/20 14:14:19 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (nb == 2147483647)
	{
		ft_putstr_fd("2147483647", fd);
		return ;
	}
	if (nb > 2147483647 || nb < -2147483648)
		return ;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar_fd('-', fd);
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb % 10, fd);
		ft_putnbr_fd(nb / 10, fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}
