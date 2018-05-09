#include "libft.h"

void	ft_puttab(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != NULL)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}
