
#include <unistd.h>

void ft_print_numbers(void)
{
	char c;
	c = '0';
	while(c < ':')
	{
		ft_putchar(c);
		c++;
	}
}
