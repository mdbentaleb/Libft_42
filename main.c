#include <stdio.h>
#include <string.h>


void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_dst;
	unsigned const char	*tmp_src;
	size_t			i;

	if (!dst && !src)
		return (0);
	if (dst == src)
		return (dst);
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	if (tmp_src < tmp_dst)
	{
		while (len--)
			tmp_dst[len] = tmp_src[len];
	}
	else
		tmp_dst = ft_memcpy(tmp_dst, tmp_src, len);
	return (dst);
}


int main()
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest = src + 1;

	
	
	printf("%s\n", ft_memmove(src, dest, 8));

	char	src1[] = "lorem ipsum dolor sit amet";
	char	*dest1 = src1 + 1;

	printf("%s\n", memmove(src1, dest1, 8));


	return 0;
}