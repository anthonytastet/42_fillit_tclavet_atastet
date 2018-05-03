#include "../libft/libft.h"
#include "../include/fillit.h"

static int	check_char(char *tab_tet)
{
	int	i;
	int	nb_hash;
	int	nb_dot;
	int	nb_n;
	 
	i = 0;
	nb_hash = 0;
	nb_dot = 0;
	nb_n = 0;
	while (tab_tet[i])
	{
		if (tab_tet[i] == '#')
			nb_hash++;
		if (tab_tet[i] == '.')
			nb_dot++;
		if (tab_tet[i] == '\n')
			nb_n++;
		i++;
	}
	if (nb_hash != 4 || nb_dot != 12 || nb_n != 4)
		return (-1);
	return (0);
}

int		second_check(char **tab_tet, int nb_tet)
{
	int j;
	int error;
	
	j = 0;
	while (nb_tet > 0)
	{
		error = check_char(tab_tet[j]);
		if (error == -1)
		{
			ft_putstr("One of the tetrimino provided does not respect rules ex : 4#\n");
			return (-1);
		}
		nb_tet--;
		j++;
	}
	return (0);
}	
