#include "./libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "ABCDEFGHIJ";

	printf("%s\n", ft_memmove(s1 + 4, s1, 5));
	char s2[] = "ABCDEFGHIJ";
	printf("%s\n", memmove(s2 + 4, s2, 5));
	
}
