#include <stdio.h>
#include <string.h>


int	main()
{
	char src[] = "ABCDEFGHij";

	printf("%s\n", memmove(src + 3, src, 6));
}