/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moben-ta <moben-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:38:45 by moben-ta          #+#    #+#             */
/*   Updated: 2024/10/23 11:16:59 by moben-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
char	*strrchr(const char *s, int c)
{
	int	i;
	char r;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			r = (char *)&s[i];
		}
		i++;
	}
	if ((char)c == '\0')
	{
		r = ((char *)(s + i));
	}
	return (NULL);
}