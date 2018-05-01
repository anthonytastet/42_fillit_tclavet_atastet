#include "../libft/libft.h"
#include "../include/fillit.h"

static	int	check_char(char *buf)
{
	int i;

	i = 0;
	while (buf[i])
	{
		if (buf[i] != '.' && buf[i] != '#' && buf[i] != '\n')
			return (-1);
		i++;
	}
	return (0);
}

static	int	check_4x4(char *buf)
{
	int	i;
	int	y;
	int 	x;
	int	test;

	x = 0;
	y = 1;
	i = 0;
	test = 0;
	//VERIFIFER SI IL VERIFIE LE DERNIER TETRIMINOS 
	while (buf[i])
	{
		if (buf[i] == '\n' | buf[i] == '\0')
		{
			test++;
			y = 0;
			printf("test >> %d\n", test);
		}
		while (buf[i] != '\n')
		{
				 x++;
			printf("x = %d\n", x);
			i++;
			if (x > 4)
				return (-1);
		}
		x = 0;
		printf("y = %d\n\n", y);
		if (y > 4)
			return (-1);
		i++;
		y++;
	}
	return (0);
}

int		simple_check(char *buf)
{
	int	ret;
	
	if((ret = check_char(buf)) == -1)
	{
		ft_putstr("ERROR : File must contain only # and .\n");
		return (-1);
	}
	if((ret = check_4x4(buf)) == -1)
	{
		ft_putstr("ERROR : One tetriminos is not in the good format\n");
		return (-1);
	}
	else
		return (0);
}
