/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 10:49:34 by atastet           #+#    #+#             */
/*   Updated: 2018/04/20 12:03:05 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"
#include "stdio.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int rest)
{

	if  (rest >= 10)
	{
		ft_putnbr(rest / 10);
		printf("%d\n", rest);
		to_print = rest % 10;
		//Si j'inverse je comprends pas le resultat
	}
		
}

int		main(int argc, char **argv)
{
	const char *send;
	
	send = (const char*) argv[1];
	if (argc != 2)
		return (0);

	printf("argv  = %s\n", argv[1]);
	printf("atoi it  = %i\n", ft_atoi(argv[1]));
	ft_putnbr (ft_atoi(argv[1]));
	return (0);
}
