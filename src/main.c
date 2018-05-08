/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 10:37:45 by atastet           #+#    #+#             */
/*   Updated: 2018/05/08 12:33:28 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../include/fillit.h"

int	main(int argc, char **argv)
{
	char 		**tab_tet;
	t_tetrimino	*lst;
	t_tetrimino	*lst_start;

	if (argc != 2)
	{
		ft_usage();
		return (-1);
	}
	dprintf(1, "Hello 0");
	tab_tet = read_tetriminos(argv[1]);
	int i;
	int j;
	j = 0;
	i = 0;
	dprintf(1, "Hello 1\n");
	lst = make_lst_tetriminos(tab_tet);
	dprintf(1, "Hello 2\n");
	lst_start = lst;
	while (lst->next)
	{
		printf("lst 0 %s\n" ,lst->tetrimino[0]);
		printf("lst 1 %s\n" ,lst->tetrimino[1]);
		printf("lst 2 %s\n" ,lst->tetrimino[2]);
		printf("lst 3 %s\n" ,lst->tetrimino[3]);
		printf("lst 4 %s\n" ,lst->tetrimino[4]);
		lst = lst->next;
	}
	return (0);
}
