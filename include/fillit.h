/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 10:39:05 by atastet           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/07/03 20:15:13 by atastet          ###   ########.fr       */
=======
/*   Updated: 2018/07/03 20:17:03 by atastet          ###   ########.fr       */
>>>>>>> 7a25b2e4d6eb0c00d274fde4ba07d00ff8a47b28
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include "../Libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define BUF_SIZE 4096

typedef struct			s_tetrimino
{
	char				**tetrimino;
	char				letter;
	int					x;
	int					y;
	int					width;
	int					height;
	struct s_tetrimino	*next;
}						t_tetrimino;

void					ft_usage(void);
char					**read_tetriminos(char *argv);
int						simple_check(char *buf);
int						second_check(char **tab_tet, int nb_tet);
t_tetrimino				*make_lst_tetriminos(char **tab_tet);
char					**make_grid(t_tetrimino *lst, int size_grid);
t_tetrimino				*arrange_tet(t_tetrimino *lst);
int						get_width(char **tet);
int						get_height(char **tet);
void					fill_y(t_tetrimino *lst);
void					fill_x(t_tetrimino *lst);
char					**fill_grid_point(char **grid, int size_grid);

#endif
