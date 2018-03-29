#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	main(int argc, char**  argv)
{
	char* y;
	char c;
	y = argv [1];
	c = y [1];	
	ft_putchar(c);
	return(0);
	
}
