#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


#include <stdio.h>

// void *ft_memset(void *b, int c, size_t len) {
//     unsigned char *ptr = b;
//     while (len--) {
//         *ptr++ = (unsigned char)c;
//     }
//     return b;
// }

// int main() 
// {
//     int s;
//     ft_memset(&s, 0, 4 );
//     ft_memset(&s, 5, 2 );
//     ft_memset(&s, 57, 1);

//     printf("%d", s);
//     return 0;
// }


static int	num_len(long nbr)
{
	int	nbr_len;

	nbr_len = 0;
	if (nbr < 0)
	{
		nbr_len++;
		nbr *= -1;
	}
	if (nbr == 0)
		nbr_len++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		nbr_len++;
	}
	return (nbr_len);
}

char	*ft_itoa(int nb)
{
	int		nbr_len;
	char	*tmp;
	int		last;
	long	n;

	n = nb;
	nbr_len = num_len(n);
	tmp = (char *)malloc(sizeof(char) * (nbr_len + 1));
	if (!tmp)
		return (NULL);
	if (n < 0)
	{
		tmp[0] = '-';
		n *= -1;
	}
	if (n == 0)
		tmp[0] = '0';
	last = nbr_len;
	while (n != 0)
	{
		tmp[--nbr_len] = n % 10 + '0';
		n = n / 10;
	}
	tmp[last] = '\0';
	return (tmp);
}



int main()
{
	printf("%d\n", num_len(-2147483648));
    printf("%s\n", ft_itoa(-2147483648));
    // printf("%s\n", itoa(-2147483648));
}