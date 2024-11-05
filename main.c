#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	i = 0;
	if (tmp_dst > tmp_src)
	{
		while (len-- > 0)
			tmp_dst[len] = tmp_src[len];
	}
	else
	{
		while (i < len)
		{
			tmp_dst[i] = tmp_dst[i];
			i++;
		}
	}
	return (dst);
}

int main()
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;
	ft_memmove(src, dest, 8);
	printf("%s\n", dest);
	return 0;
}