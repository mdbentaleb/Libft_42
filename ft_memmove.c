/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moben-ta <moben-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:29:51 by moben-ta          #+#    #+#             */
/*   Updated: 2024/11/05 15:56:59 by moben-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*tmp_dst;
	unsigned const char	*tmp_src;

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
