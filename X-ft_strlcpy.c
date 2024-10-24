/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moben-ta <moben-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:35:32 by moben-ta          #+#    #+#             */
/*   Updated: 2024/10/24 16:16:50 by moben-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;
	const char 
	
	src_len = ft_strlen(src);
	if (!dstsize)
	{
		i = 0;
		while (src[i] != '\0' && i < dstsize)
		{
			src[i] = dst[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
