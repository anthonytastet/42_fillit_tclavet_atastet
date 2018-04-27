#include <libc.h>
#include <stdio.h>

int	main()
{
	printf("%lu\n", strlcat("abc\0\0\0", "cccc", 0));
	return (0);
}
