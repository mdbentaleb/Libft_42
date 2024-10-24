#include "./libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "abc";
	char s2[] = "abc";

	printf("%d\n", ft_memcmp(s1, s2, 5));
	printf("%d\n", ft_strncmp(s1, s2, 5));
	
	printf("%d\n", memcmp(s1, s2, 5));
}
