/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moben-ta <moben-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:29:51 by moben-ta          #+#    #+#             */
/*   Updated: 2024/10/25 16:16:03 by moben-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *tmp_dst;
	unsigned char *tmp_src;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	i = 0;
	if (tmp_dst > tmp_src)
	{
		while(len > 0)
		{
			tmp_dst[len - 1] = tmp_src[len - 1];
			len--;
		}
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