/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moben-ta <moben-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:12:27 by moben-ta          #+#    #+#             */
/*   Updated: 2024/10/29 11:48:37 by moben-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;
	char *tmp;

	start = 0;
	while (s1[start++] != '\0')
	{
		if (ft_strchr(set, s1[start]) != NULL)
			break;
	}
	end = ft_strlen(s1);
	while (s1[end--] > start)
	{
		if (ft_strrchr(set, s1[end]) != NULL)
		break;
	}
	tmp = ft_substr(s1, start, end - start + 1);
	return (tmp);
}
