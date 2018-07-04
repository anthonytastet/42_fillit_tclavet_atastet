/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 15:10:26 by atastet           #+#    #+#             */
/*   Updated: 2018/07/04 15:10:30 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

void	ft_usage(void)
{
	ft_putendl("usage: ./fillit [File containing between 2 and 26 Tetriminos]");
	ft_putendl("     Note : If file contains more than 26 Tetriminos,");
	ft_putendl("               The program will run slowly.");
}
